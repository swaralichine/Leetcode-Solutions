/* group by activity_date because we want to find the number of active users per day */

select activity_date as 'day',
count(distinct user_id) as 'active_users'
from Activity
where activity_date between '2019-06-28' and '2019-07-27'
group by activity_date;

