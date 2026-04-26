Classes:



School:

* vector with unique\_ptr to students
* vector with unique\_ptr to parents
* vector with unique\_ptr to teachers
* (or one vector with unique\_ptr to all users)
* vector with unique\_ptr to subjects



/DOB (struct):

* day
* month
* year



/User : 

* email 
* password
* name
* surname
* date of birth



Student (inherits from user): 

* vector with raw pointer to subjects
* vector with unique pointer to submissions (class)



Parent (inherits from user): 

* raw pointer to student object



Teacher (inherits from user):

* vector with raw pointer to subjects



Subject:

* name
* raw pointer to teacher
* vector with unique pointer to assignments


Assignment

* name
* (extra info)
* raw pointer to subject
* vector with raw pointer to all submissions



Submission (will always be inside the student assignment vector):

* raw pointer to assignment
* file that student uploaded (pdf, image, txt,...)
* grade





Functions:

School:

&#x09;search student

&#x09;search teacher

&#x09;search subject

User:

&#x09;Edit info (new\_email, new\_password, new\_name, new\_surname, new\_dob)

Student:

&#x09;Enroll(subject)

&#x09;CreateSubmission(assignment, file)

Teacher:

&#x09;Enroll(subject)

Subject:

&#x09;create\_assignment(name, extra info)

Submission:

&#x09;grade\_submission(grade)



