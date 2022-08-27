select tweet_id from 
(select tweet_id, length(content) as length from tweets) t1 where t1.length >15;

