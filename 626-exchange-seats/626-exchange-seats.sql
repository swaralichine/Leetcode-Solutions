
select
case 
    when mod(seat.id,2)= 0 then id-1
    when mod(seat.id,2)!=0 and id != (select count(*) from seat) then id +1
    else id 
end 
    as id, student 
from seat 
order by id asc  ; 




