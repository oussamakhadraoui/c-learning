# Write your MySQL query statement below
select a.employee_id ,a.name,count(b.reports_to )as reports_count ,round(avg(b.age)) as average_age 
from  Employees as a
join Employees as b
on a.employee_id =b.reports_to 
group by a.employee_id,a.name
order by a.employee_id
-- select e1.employee_id, e1.name, count(e2.employee_id) as reports_count,
--      round(avg(e2.age)) as average_age
--      from employees e1 join employees e2 on e1.employee_id = e2.reports_to
-- group by e1.employee_id, e1.name
-- order by e1.employee_id
