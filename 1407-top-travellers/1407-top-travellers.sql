select name,
sum(if(distance is null,0,distance)) as travelled_distance
from users
left join rides on users.id = rides.user_id
group by users.id
order by travelled_distance desc, name asc;


