-- phpMyAdmin SQL Dump
-- version 4.7.4
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1:3306
-- Generation Time: Dec 10, 2018 at 04:35 PM
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
CREATE DATABASE IF NOT EXISTS `task_badger` DEFAULT CHARACTER SET latin1 COLLATE latin1_swedish_ci;
USE `task_badger`;

DELIMITER $$
--
-- Procedures
--
DROP PROCEDURE IF EXISTS `list_items`$$
CREATE DEFINER=`root`@`localhost` PROCEDURE `list_items` (IN `id` INT)  SELECT item.name AS `List` 
FROM item
WHERE item.list_id = @id$$

DROP PROCEDURE IF EXISTS `project_category`$$
CREATE DEFINER=`root`@`localhost` PROCEDURE `project_category` (IN `id` INT)  select `task_badger`.`project`.`id` AS `Project #`,`task_badger`.`project`.`name` AS `Project`,`task_badger`.`project`.`priority` AS `Priority`,`task_badger`.`status`.`name` AS `Status`,`task_badger`.`category`.`name` AS `Category`,`task_badger`.`project`.`due_date` AS `Due Date` from ((`task_badger`.`project` join `task_badger`.`category` on((`task_badger`.`project`.`categoryID` = `task_badger`.`category`.`id`))) join `task_badger`.`status` on((`task_badger`.`project`.`statusID` = `task_badger`.`status`.`id`))) 
WHERE project.categoryID = @id 
order by `task_badger`.`project`.`id` desc$$

DROP PROCEDURE IF EXISTS `project_lists`$$
CREATE DEFINER=`root`@`localhost` PROCEDURE `project_lists` (IN `id` INT)  select `task_badger`.`list`.`id` AS `List #`, `task_badger`.`list`.`name` AS `List`, `task_badger`.`project`.`name` AS `Project` from (`task_badger`.`list` left join `task_badger`.`project` on((`task_badger`.`list`.`project_id` = `task_badger`.`project`.`id`))) WHERE list.project_id = @id order by `task_badger`.`list`.`id`$$

DROP PROCEDURE IF EXISTS `project_tasks`$$
CREATE DEFINER=`root`@`localhost` PROCEDURE `project_tasks` (IN `id` INT)  select `task_badger`.`task`.`id` AS `Task #`,`task_badger`.`task`.`name` AS `Task`,`task_badger`.`task`.`priority` AS `Priority`,`task_badger`.`status`.`name` AS `Status`,`task_badger`.`task`.`due_date` AS `Due Date` from (`task_badger`.`task` join `task_badger`.`status` on((`task_badger`.`task`.`statusID` = `task_badger`.`status`.`id`))) WHERE task.projectID = @id
order by `task_badger`.`task`.`id`$$

DROP PROCEDURE IF EXISTS `task_lists`$$
CREATE DEFINER=`root`@`localhost` PROCEDURE `task_lists` (IN `id` INT)  select `task_badger`.`list`.`id` AS `List #`, `task_badger`.`list`.`name` AS `List`, `task_badger`.`task`.`name` AS `Task` from (`task_badger`.`list` left join `task_badger`.`task` on((`task_badger`.`list`.`task_id` = `task_badger`.`task`.`id`))) WHERE list.task_id = @id order by `task_badger`.`list`.`id`$$

DELIMITER ;

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
  `name` varchar(100) DEFAULT NULL,
  `done` tinyint(4) DEFAULT '0',
  PRIMARY KEY (`id`),
  KEY `list_item_idx` (`list_id`)
) ENGINE=InnoDB AUTO_INCREMENT=55 DEFAULT CHARSET=latin1;

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
) ENGINE=InnoDB AUTO_INCREMENT=35 DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Stand-in structure for view `lists_view`
-- (See below for the actual view)
--
DROP VIEW IF EXISTS `lists_view`;
CREATE TABLE IF NOT EXISTS `lists_view` (
`List #` int(11)
,`List` varchar(45)
,`Project` varchar(45)
,`Task` varchar(100)
);

-- --------------------------------------------------------

--
-- Table structure for table `project`
--

DROP TABLE IF EXISTS `project`;
CREATE TABLE IF NOT EXISTS `project` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `name` varchar(45) NOT NULL,
  `description` text,
  `priority` enum('Lowest','Low','Normal','High','Highest') NOT NULL DEFAULT 'Normal',
  `total_cost` float(10,2) NOT NULL DEFAULT '0.00',
  `date_created` datetime NOT NULL,
  `due_date` date DEFAULT NULL,
  `statusID` int(11) NOT NULL DEFAULT '1',
  `categoryID` int(11) NOT NULL DEFAULT '1',
  PRIMARY KEY (`id`),
  KEY `project_status_idx` (`statusID`),
  KEY `project_category_idx` (`categoryID`)
) ENGINE=InnoDB AUTO_INCREMENT=43 DEFAULT CHARSET=latin1;

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
  `name` varchar(100) NOT NULL,
  `description` text,
  `due_date` date DEFAULT NULL,
  `priority` enum('Lowest','Low','Normal','High','Highest') NOT NULL DEFAULT 'Normal',
  `statusID` int(11) NOT NULL,
  `projectID` int(11) NOT NULL,
  PRIMARY KEY (`id`),
  KEY `projectID_idx` (`projectID`),
  KEY `task_status_idx` (`statusID`)
) ENGINE=InnoDB AUTO_INCREMENT=37 DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Stand-in structure for view `tasks_view`
-- (See below for the actual view)
--
DROP VIEW IF EXISTS `tasks_view`;
CREATE TABLE IF NOT EXISTS `tasks_view` (
`Task #` int(11)
,`Task` varchar(100)
,`Priority` enum('Lowest','Low','Normal','High','Highest')
,`Status` varchar(45)
,`Due Date` date
,`Project` int(11)
);

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
-- Stand-in structure for view `urgent_proj`
-- (See below for the actual view)
--
DROP VIEW IF EXISTS `urgent_proj`;
CREATE TABLE IF NOT EXISTS `urgent_proj` (
`Project #` int(11)
,`Project` varchar(45)
,`Priority` enum('Lowest','Low','Normal','High','Highest')
,`Status` varchar(45)
,`Category` varchar(45)
,`Due Date` date
);

-- --------------------------------------------------------

--
-- Structure for view `lists_view`
--
DROP TABLE IF EXISTS `lists_view`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `lists_view`  AS  select `list`.`id` AS `List #`,`list`.`name` AS `List`,`project`.`name` AS `Project`,`task`.`name` AS `Task` from ((`list` left join `project` on((`list`.`project_id` = `project`.`id`))) left join `task` on((`list`.`task_id` = `task`.`id`))) order by `list`.`id` ;

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
-- Structure for view `tasks_view`
--
DROP TABLE IF EXISTS `tasks_view`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `tasks_view`  AS  select `task`.`id` AS `Task #`,`task`.`name` AS `Task`,`task`.`priority` AS `Priority`,`status`.`name` AS `Status`,`task`.`due_date` AS `Due Date`,`task`.`projectID` AS `Project` from (`task` join `status` on((`task`.`statusID` = `status`.`id`))) order by `task`.`id` ;

-- --------------------------------------------------------

--
-- Structure for view `upcoming_due`
--
DROP TABLE IF EXISTS `upcoming_due`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `upcoming_due`  AS  select `project`.`id` AS `Project #`,`project`.`name` AS `Project`,`project`.`priority` AS `Priority`,`status`.`name` AS `Status`,`category`.`name` AS `Category`,`project`.`due_date` AS `Due Date` from ((`project` join `category` on((`project`.`categoryID` = `category`.`id`))) join `status` on((`project`.`statusID` = `status`.`id`))) where ((`project`.`due_date` >= curdate()) and (`status`.`name` <> 'complete')) order by `project`.`due_date` ;

-- --------------------------------------------------------

--
-- Structure for view `urgent_proj`
--
DROP TABLE IF EXISTS `urgent_proj`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `urgent_proj`  AS  select `project`.`id` AS `Project #`,`project`.`name` AS `Project`,`project`.`priority` AS `Priority`,`status`.`name` AS `Status`,`category`.`name` AS `Category`,`project`.`due_date` AS `Due Date` from ((`project` join `category` on((`project`.`categoryID` = `category`.`id`))) join `status` on((`project`.`statusID` = `status`.`id`))) where ((`status`.`name` <> 'complete') and (`project`.`priority` in ('High','Highest'))) order by `project`.`priority` desc ;

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
