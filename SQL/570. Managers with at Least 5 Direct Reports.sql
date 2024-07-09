SELECT name
FROM Employee
WHERE id IN
(
SELECT managerId
FROM Employee 
WHERE managerId IS NOT NULL 
GROUP BY managerId
HAVING count(department) >= 5
)
