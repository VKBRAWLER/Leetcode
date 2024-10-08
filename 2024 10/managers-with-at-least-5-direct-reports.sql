CREATE TABLE Employees (
  EmployeeID INT PRIMARY KEY AUTO_INCREMENT,
  FirstName VARCHAR(50),
  LastName VARCHAR(50),
  HireDate DATE,
  Salary DECIMAL(10, 2)
);

CREATE TABLE Departments (
  DepartmentID INT PRIMARY KEY,
  DepartmentName VARCHAR(100),
  Location VARCHAR(100)
);

ALTER TABLE Employees
ADD Email VARCHAR(100);

ALTER TABLE Employees
MODIFY Salary DECIMAL(12, 2);

ALTER TABLE Departments
RENAME COLUMN Location TO DepartmentLocation;

DROP TABLE Departments;

ALTER TABLE Employees
DROP COLUMN Email;

ALTER TABLE Employees
ADD CONSTRAINT unique_email UNIQUE (Email);