select id as 'id',
case when id = (select id from tree where p_id is null) then 'Root'
when id in (Select p_id from tree) then 'Inner'
else 'Leaf'
end as type
from tree
order by 1;






