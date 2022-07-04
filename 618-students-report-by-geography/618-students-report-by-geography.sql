select max(America) as America, max(Asia) as Asia,max(Europe) as Europe
from
(
select
    case when continent ='America' then name else null end as America,
    case when continent = 'Asia' then name else null end as Asia,
    case when continent = 'Europe' then name else null end as Europe,
    row_number() over (partition by continent order by name) as rownum
    from student
) a
group by rownum





