# Write your MySQL query statement below
SELECT 
    d.name AS Department,
    e1.name AS Employee,
    e1.salary AS Salary 
FROM Employee AS e1
JOIN Department AS d 
    ON e1.departmentId = d.id 
where 3 >(
    select count(distinct (salary))
    from employee e2
    where e2.salary>e1.salary and
    e1.departmentId=e2.departmentId
);