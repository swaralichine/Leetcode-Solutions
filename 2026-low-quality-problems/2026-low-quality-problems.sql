select problem_id
from Problems
where ((likes*100)/(likes+dislikes))<60
order by problem_id asc;




