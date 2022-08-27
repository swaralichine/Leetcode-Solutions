select s1.student_name as member_A,
s2.student_name as member_B,
s3.student_name as member_C
from SchoolA as s1, SchoolB as s2, SchoolC as s3
where s1.student_name!=s2.student_name and s1.student_name!=s3.student_name
and s2.student_name!=s3.student_name
and s1.student_id!=s2.student_id and s1.student_id!=s3.student_id
and s2.student_id!=s3.student_id;
