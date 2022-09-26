# Write your MySQL query statement below
Select distinct c1.user_id
from Confirmations c1,
     Confirmations c2
where 
     c1.user_id = c2.user_id
 and c1.time_stamp < c2.time_stamp
 and TIMESTAMPDIFF(second,c1.time_stamp,c2.time_stamp) <= 86400

