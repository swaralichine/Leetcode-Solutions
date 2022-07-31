Select * from
(
select p.player_id,
       p.player_name,
       sum(case when c.Wimbledon=p.player_id then 1 else 0 end) +
       sum(case when c.Fr_open=p.player_id then 1 else 0 end) +
       sum(case when c.US_open=p.player_id then 1 else 0 end) +
       sum(case when c.Au_open=p.player_id then 1 else 0 end) as grand_slams_count
    from players p,Championships c
    group by p.player_id,p.player_name
)a
where grand_slams_count>0;






