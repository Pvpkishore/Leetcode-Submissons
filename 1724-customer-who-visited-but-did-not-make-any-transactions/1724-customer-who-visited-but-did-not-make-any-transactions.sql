# Write your MySQL query statement below
select v.customer_id,count(*) as count_no_trans
From Visits v
LEFT JOIN Transactions t ON v.visit_id = t.visit_id
WHERE t.transaction_id IS NULL
GROUP BY v.customer_id;