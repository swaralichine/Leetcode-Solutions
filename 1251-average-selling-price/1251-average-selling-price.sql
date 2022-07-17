Select prices.product_id,
round(sum(prices.price*UnitsSold.units)/sum(UnitsSold.units),2) as
average_price 
from prices
inner join UnitsSold
on prices.product_id = UnitsSold.product_id and 
UnitsSold.purchase_date between start_date and end_date
group by prices.product_id;

