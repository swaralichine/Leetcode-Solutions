# Write your MySQL query statement below
Select session_id
from Playback p
left join ads ad on p.customer_id = ad.customer_id
and ad.timestamp between p.start_time and p.end_time
where ad.customer_id is null

