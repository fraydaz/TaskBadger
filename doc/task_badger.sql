-- phpMyAdmin SQL Dump
-- version 4.7.4
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1:3306
-- Generation Time: Oct 28, 2018 at 05:54 PM
-- Server version: 5.7.19
-- PHP Version: 5.6.31

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `task_badger`
--

-- --------------------------------------------------------

--
-- Table structure for table `category`
--

DROP TABLE IF EXISTS `category`;
CREATE TABLE IF NOT EXISTS `category` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `name` varchar(45) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=latin1;

--
-- Dumping data for table `category`
--

INSERT INTO `category` (`id`, `name`) VALUES
(1, 'Personal'),
(2, 'Work'),
(3, 'School');

-- --------------------------------------------------------

--
-- Table structure for table `item`
--

DROP TABLE IF EXISTS `item`;
CREATE TABLE IF NOT EXISTS `item` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `list_id` int(11) NOT NULL,
  `description` varchar(100) DEFAULT NULL,
  `done` tinyint(4) DEFAULT NULL,
  PRIMARY KEY (`id`),
  KEY `list_item_idx` (`list_id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `list`
--

DROP TABLE IF EXISTS `list`;
CREATE TABLE IF NOT EXISTS `list` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `name` varchar(45) NOT NULL,
  `task_id` int(11) DEFAULT NULL,
  `project_id` int(11) DEFAULT NULL,
  PRIMARY KEY (`id`),
  KEY `task_list_idx` (`task_id`),
  KEY `project_list_idx` (`project_id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `project`
--

DROP TABLE IF EXISTS `project`;
CREATE TABLE IF NOT EXISTS `project` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `name` varchar(45) NOT NULL,
  `description` varchar(750) DEFAULT NULL,
  `priority` enum('Lowest','Low','Normal','High','Highest') NOT NULL DEFAULT 'Normal',
  `total_cost` float(10,2) NOT NULL DEFAULT '0.00',
  `date_created` datetime NOT NULL,
  `due_date` date DEFAULT NULL,
  `statusID` int(11) NOT NULL DEFAULT '1',
  `categoryID` int(11) NOT NULL DEFAULT '1',
  PRIMARY KEY (`id`),
  KEY `project_status_idx` (`statusID`),
  KEY `project_category_idx` (`categoryID`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Stand-in structure for view `projects_tree`
-- (See below for the actual view)
--
DROP VIEW IF EXISTS `projects_tree`;
CREATE TABLE IF NOT EXISTS `projects_tree` (
`My Projects` varchar(45)
);

-- --------------------------------------------------------

--
-- Stand-in structure for view `projects_view`
-- (See below for the actual view)
--
DROP VIEW IF EXISTS `projects_view`;
CREATE TABLE IF NOT EXISTS `projects_view` (
`Project #` int(11)
,`Project` varchar(45)
,`Priority` enum('Lowest','Low','Normal','High','Highest')
,`Status` varchar(45)
,`Category` varchar(45)
,`Due Date` date
);

-- --------------------------------------------------------

--
-- Table structure for table `status`
--

DROP TABLE IF EXISTS `status`;
CREATE TABLE IF NOT EXISTS `status` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `name` varchar(45) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=latin1;

--
-- Dumping data for table `status`
--

INSERT INTO `status` (`id`, `name`) VALUES
(1, 'New'),
(2, 'In Progress'),
(3, 'On Hold'),
(4, 'Complete');

-- --------------------------------------------------------

--
-- Table structure for table `task`
--

DROP TABLE IF EXISTS `task`;
CREATE TABLE IF NOT EXISTS `task` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `name` varchar(45) NOT NULL,
  `details` varchar(150) DEFAULT NULL,
  `due_date` date DEFAULT NULL,
  `priority` int(11) NOT NULL,
  `statusID` int(11) NOT NULL,
  `projectID` int(11) NOT NULL,
  PRIMARY KEY (`id`),
  KEY `projectID_idx` (`projectID`),
  KEY `task_status_idx` (`statusID`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Stand-in structure for view `upcoming_due`
-- (See below for the actual view)
--
DROP VIEW IF EXISTS `upcoming_due`;
CREATE TABLE IF NOT EXISTS `upcoming_due` (
`Project #` int(11)
,`Project` varchar(45)
,`Priority` enum('Lowest','Low','Normal','High','Highest')
,`Status` varchar(45)
,`Category` varchar(45)
,`Due Date` date
);

-- --------------------------------------------------------

--
-- Structure for view `projects_tree`
--
DROP TABLE IF EXISTS `projects_tree`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `projects_tree`  AS  select `category`.`name` AS `My Projects` from `category` order by `category`.`id` ;

-- --------------------------------------------------------

--
-- Structure for view `projects_view`
--
DROP TABLE IF EXISTS `projects_view`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `projects_view`  AS  select `project`.`id` AS `Project #`,`project`.`name` AS `Project`,`project`.`priority` AS `Priority`,`status`.`name` AS `Status`,`category`.`name` AS `Category`,`project`.`due_date` AS `Due Date` from ((`project` join `category` on((`project`.`categoryID` = `category`.`id`))) join `status` on((`project`.`statusID` = `status`.`id`))) order by `project`.`id` desc ;

-- --------------------------------------------------------

--
-- Structure for view `upcoming_due`
--
DROP TABLE IF EXISTS `upcoming_due`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `upcoming_due`  AS  select `projects_view`.`Project #` AS `Project #`,`projects_view`.`Project` AS `Project`,`projects_view`.`Priority` AS `Priority`,`projects_view`.`Status` AS `Status`,`projects_view`.`Category` AS `Category`,`projects_view`.`Due Date` AS `Due Date` from `projects_view` order by 'Due Date' ;

--
-- Constraints for dumped tables
--

--
-- Constraints for table `item`
--
ALTER TABLE `item`
  ADD CONSTRAINT `list_item` FOREIGN KEY (`list_id`) REFERENCES `list` (`id`) ON DELETE NO ACTION ON UPDATE NO ACTION;

--
-- Constraints for table `list`
--
ALTER TABLE `list`
  ADD CONSTRAINT `project_list` FOREIGN KEY (`project_id`) REFERENCES `project` (`id`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  ADD CONSTRAINT `task_list` FOREIGN KEY (`task_id`) REFERENCES `task` (`id`) ON DELETE NO ACTION ON UPDATE NO ACTION;

--
-- Constraints for table `project`
--
ALTER TABLE `project`
  ADD CONSTRAINT `project_category` FOREIGN KEY (`categoryID`) REFERENCES `category` (`id`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  ADD CONSTRAINT `project_status` FOREIGN KEY (`statusID`) REFERENCES `status` (`id`) ON DELETE NO ACTION ON UPDATE NO ACTION;

--
-- Constraints for table `task`
--
ALTER TABLE `task`
  ADD CONSTRAINT `task_proj` FOREIGN KEY (`projectID`) REFERENCES `project` (`id`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  ADD CONSTRAINT `task_status` FOREIGN KEY (`statusID`) REFERENCES `status` (`id`) ON DELETE NO ACTION ON UPDATE NO ACTION;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
