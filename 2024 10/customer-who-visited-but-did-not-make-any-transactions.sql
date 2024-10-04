select customer_id , count(visit_id) as count_no_trans from Visits
where 
visit_id not in (select  visit_id from Transactions)
group by customer_id;


-- select Visits.customer_id , count(Visits.visit_id) as count_no_trans from Visits left join Transactions
-- on Transactions.visit_id = Visits.visit_id
-- where amount is null
-- group by customer_id;