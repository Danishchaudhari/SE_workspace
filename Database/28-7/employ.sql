-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Aug 02, 2025 at 06:02 AM
-- Server version: 10.4.32-MariaDB
-- PHP Version: 8.0.30

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `tops`
--

-- --------------------------------------------------------

--
-- Table structure for table `employ`
--

CREATE TABLE `employ` (
  `Emp no` int(10) NOT NULL,
  `First name` varchar(50) NOT NULL,
  `Last name` varchar(50) NOT NULL,
  `Designation` varchar(60) NOT NULL,
  `Hiredate` varchar(30) NOT NULL,
  `Salary` int(20) NOT NULL,
  `Comm` varchar(10) NOT NULL,
  `Deptno` int(10) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `employ`
--

INSERT INTO `employ` (`Emp no`, `First name`, `Last name`, `Designation`, `Hiredate`, `Salary`, `Comm`, `Deptno`) VALUES
(1001, 'stefan', 'salavtore', 'bussines analyst', '17-NOV-97', 50000, '-', 40),
(1002, 'diana', 'lorrence', 'technial architect', '01-may-00', 70000, '-', 10),
(1003, 'james', 'madinsaon', 'manager', '19-jun-88', 80400, '-', 40),
(1004, 'jones', 'nick', 'hr analyst', '02-JAN-03', 47000, '-', 30);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `employ`
--
ALTER TABLE `employ`
  ADD PRIMARY KEY (`Emp no`),
  ADD KEY `Emp no` (`Emp no`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `employ`
--
ALTER TABLE `employ`
  MODIFY `Emp no` int(10) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=1005;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
