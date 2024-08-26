# Write your MySQL query statement below
select s.student_id ,s.student_name, su.subject_name, count(ex.subject_name)as attended_exams
from Students s
join Subjects su 
left join Examinations ex
on s.student_id=ex.student_id and su.subject_name=ex.subject_name
group by s.student_id,su.subject_name
order by s.student_id,su.subject_name