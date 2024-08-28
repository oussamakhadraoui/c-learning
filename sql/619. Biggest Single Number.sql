select max(c) as num from 
(select num as c from MyNumbers group by num having count(num)=1) as x