select contest_id,
       round(100*(count(user_id)/(select count(*) from users)),2) as "percentage"
from register
group by contest_id
order by percentage desc,
         contest_id asc;


