# Write your MySQL query statement below
Select d.name as Department,e.name as Employee,e.salary as Salary from
Employee as e
join Department as d
on e.departmentId=d.id
Where(e.departmentId,e.salary)IN
(select departmentId,Max(salary)
from Employee
group By departmentId);