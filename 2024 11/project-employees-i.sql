SELECT p.project_id, round(AVG(e.experience_years), 2) as average_years FROM  project as p left join employee as e 
on p.employee_id = e.employee_id GROUP BY p.project_id;