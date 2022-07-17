select stock_name,
sum(case when operation='buy' then -price
    else price
    end) as capital_gain_loss
    from stocks
    group by stock_name;



