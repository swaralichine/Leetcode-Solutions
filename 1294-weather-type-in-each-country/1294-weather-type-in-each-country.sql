select c.country_name,
(case
when avg(w.weather_state)<=15 then "Cold"
when avg(w.weather_state)>=25 then "Hot"
else "Warm"
end) as weather_type
from Countries as c,Weather as w
where c.country_id = w.country_id and DATE_FORMAT(w.day,"%M %Y")="November 2019"
group by c.country_id


