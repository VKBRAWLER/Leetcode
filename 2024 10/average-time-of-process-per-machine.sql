select S.machine_id , round(avg(E.timestamp - S.timestamp), 3) as processing_time
from Activity E inner join Activity S
where E.machine_id = S.machine_id
and E.process_id = S.process_id
and E.activity_type = 'end'
and S.activity_type = 'start'
group by S.machine_id;