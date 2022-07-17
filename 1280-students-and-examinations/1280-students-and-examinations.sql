select s.student_id,
 student_name,
 sub.subject_name,
 count(e.student_id) as attended_exams
 from students s
 join subjects sub
 left join examinations e
 on s.student_id=e.student_id and sub.subject_name=e.subject_name
 group by s.student_id,sub.subject_name
 order by s.student_id,sub.subject_name;
 
