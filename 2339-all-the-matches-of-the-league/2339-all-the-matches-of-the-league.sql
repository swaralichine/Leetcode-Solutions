Select t1.team_name as home_team,
t2.team_name as away_team
from teams as t1 join teams as t2
on t1.team_name!=t2.team_name;

