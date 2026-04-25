Classes:



User : 

* email 
* password



Student (inherits from user): 

* vector with pointer to subjects
* vector with pointer to submissions (class)



Parent (inherits from user): 

* pointer to student object



Teacher (inherits from user):

* vector with pointer to subjects



Subject:

* name
* vector with pointer to assignments


Assignment

* name
* (extra info)
* vector with pointer to all submissions



Submission (will always be inside the student assignment vector):

* pointer to assignment
* file that student uploaded (pdf, image, txt,...)
* grade





Functions:



Edit info (User, new\_email, new\_password): 

