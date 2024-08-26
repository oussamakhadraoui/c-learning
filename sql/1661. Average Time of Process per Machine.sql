select a.machine_id,round(avg(b.timestamp -a.timestamp),3)  as processing_time from Activity as a
join Activity as b on b.machine_id=a.machine_id
where
b.activity_type="end" and 
a.activity_type ="start" 

group by machine_id;