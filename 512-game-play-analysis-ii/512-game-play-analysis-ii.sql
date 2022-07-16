select a.player_id,
a.device_id
from Activity a
where (a.player_id,a.event_date) in (select a1.player_id,min(a1.event_date) from Activity a1 group by a1.player_id)
order by player_id;


