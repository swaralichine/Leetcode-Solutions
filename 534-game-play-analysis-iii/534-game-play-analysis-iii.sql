select a1.player_id,
a1.event_date,
(select sum(a2.games_played) from activity a2 where a2.event_date <= a1.event_date and a2.player_id=a1.player_id) as games_played_so_far
from activity a1



