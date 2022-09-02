select round(
count(case when customer_pref_delivery_date=order_date then delivery_id end)*100 
           /
          count(delivery_id)
          ,2) as immediate_percentage
from Delivery


