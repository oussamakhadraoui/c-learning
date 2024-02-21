SELECT tweet_id FROM Tweets WHERE CHAR_LENGTH(content) > 15;
select distinct author_id as id from Views where  author_id=viewer_id order by id asc
select name ,population,area from World where   area >= 3000000 OR population >= 25000000;
select name from Customer where referee_id!=2 or referee_id is null ; 

-- sql training