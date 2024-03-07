SELECT tweet_id FROM Tweets WHERE CHAR_LENGTH(content) > 15;
select distinct author_id as id from Views where  author_id=viewer_id order by id asc
select name ,population,area from World where   area >= 3000000 OR population >= 25000000;
select name from Customer where referee_id!=2 or referee_id is null ; 
select product_id from Products where low_fats='Y'and recyclable ='Y';
-- sql training

select  employee.first_name, employee.emp_id,works_with.total_sales  from employee
join works_with
ON works_with.emp_id=employee.emp_id where total_sales>30000;

select employee.first_name from employee where employee.emp_id in (
select emp_id from works_with where total_sales>30000 
);

show tables;
show databases;
use oussama;
select * from branch;
select count(emp_id) from employee;
select count(emp_id) from employee where sex ='F'AND birth_day>'1971-01-01';
select sum(salary) from employee;
SELECT COUNT(branch_id),branch_id from employee group by branch_id;
select sum(total_sales),emp_id from works_with group by emp_id order by emp_id asc;
select * from client where client_name like '%LLC';
select * from employee where birth_day like '_____10%';
select branch_name as branchAndSupllier from branch
union
select supplier_name from branch_supplier;
INSERT INTO branch VALUES (4,"Buffalo",NULL,NULL);
select emp_id, employee.first_name,employee.last_name,branch_name from employee
join branch on employee.emp_id=branch.mgr_id;