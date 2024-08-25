select 
sell_date,
count(distinct(product)) as num_sold ,
group_concat(distinct(product) order by product asc separator ',') as products from  Activities 
group by(sell_date);

-- to group  a distinct table name you need to make this query which is the group concat 