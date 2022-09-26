# Write your MySQL query statement below
Select s1.sub_id as post_id,
       count(distinct s2.sub_id) as number_of_comments
from Submissions s1
left join Submissions s2
on s1.sub_id = s2.parent_id
where s1.parent_id is null
group by 1
order by 1
