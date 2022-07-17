select distinct(c.title) as title
from content c
inner join TVProgram p on p.content_id=c.content_id
where c.Kids_content='Y'and c.content_type='Movies' and date_format(p.program_date,"%M %Y")="June 2020"
order by title asc;
