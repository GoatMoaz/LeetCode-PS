# Write your MySQL query statement below
SELECT firstName, lastname, city, state FROM Person LEFT JOIN Address
ON Person.personId = Address.personId;