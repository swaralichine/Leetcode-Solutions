select distinct viewer_id as 'id'
from views
where author_id=viewer_id
order by viewer_id;


