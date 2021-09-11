# Computer-Systems

<h2> 
Course information
Covers how programs are represented and executed by modern computers, including low-level machine representations of programs and data, an understanding of how computer components and the memory hierarchy influence performance.

Learning goals
Learning goals throughout the term: 

Explain and perform common logical operations (and, or, negation, conversion) on binary variables and binary vectors and identify and apply common boolean algebraic laws such as DeMorgan’s laws, idempotence, etc
An ability to translate between integer binary and decimal data, detect and identify the outcome of operations due to limited data representations (e.g. overflow), distinguish between the data representations and ranges for signed and unsigned data types
Translate IEEE floating point representation to and from binary and real numbers and identify the limitations of fixed-precision floating point representation.
An ability to related compiler-generated assembly programs to the corresponding higher level language structures with sufficient ability to enable debugging high level programs. Given a machine language representation of a program compiled in a higher level language, students should be identify and describe the operation of conditional statements, loops, function calls, switch statements.
The ability to explain how higher level language functions are implemented using the stack of an underlying machine, including how local variables are allocated, trace the execution due to recursion and identify and trace the effect of buffer-overflow of the stack.
An ability to explain how high level program structures can be restructured to facilitate optimization for pipelined architectures and cache memory hierarchies.
An ability to explain how computer memory is organized and represented both to the programmer and to the computer architecture by the operating system through the use of virtual memory mapping.
An understanding of how to use asynchronous signals, concurrent programs, and the programming issues that arise with such programs, such as race conditions.
Identify and construct processes on a common computer platform, identify and perform basic synchronization between processes, and understand the costs and benefits of using processes.
An ability to explain how global memory, function-local, and dynamic memory allocation is performed and the performance benefits of each form of memory allocation.
An ability to explain how programming errors may affect program correctness, including errors in function calls, memory allocation, integer, and floating point data representations. 
An ability to measure program performance and use that measured information to determine how to improve program performance. 
An ability to use a machine-level debugger and inspect the memory and register state of programs.
</h2>

CSCI 2400 Syllabus
ICSCI 2400 - Computer Systems Course Syllabus
Fall 2021, 4 credits

Instructor Information
Section 100

Instructor: Maciej Zagrodzki
Email: maciej.zagrodzki@colorado.edu
Lecture: MWF 10:20am-11:10am (Zoom link)
Section 200
Instructor: Hoang Truong
Email: hoang.truong@colorado.edu
Lecture: TTh 2:20pm-3:35pm (Zoom link)

See "Office Hour and TA Schedule" for office hours info including times & Zoom links.

Lab and Exam Dates


Lab

Available

Checkpoint

Due

Grade Start

Grade End

#1 - datalab

Mon, Aug 23



Fri, Sep 10

Mon, Sep 13

Fri, Sep 17

Exam #1

In Lecture	
Section 100: Sept 17
Section 200: Sept 16


#2 - bomblab

Mon, Sep 6



Fri, Sep 24

Mon, Sep 27

Fri, Oct 1

Exam #2

In Lecture	

Section 100: Oct 8
Section 200: Oct 7


#3 - attacklab

Mon, Sep 27



Fri, Oct 15

Mon, Oct 18

Fri, Oct 22

#4 - perflab

Mon, Oct 18



Fri, Oct 29

Mon, Nov 1

Fri, Nov 5

Exam #3

In Lecture	
Section 100: Nov 5
Section 200: Nov 4


#5 - shelllab

Mon, Nov 1



Fri, Nov 19

Mon, Nov 22

Fri, Nov 26

#6 - malloclab

Mon, Nov 15



Fri, Dec 3




Exam # 4 - during finals week:

Section 100 (Zagrodzki) - TBA
Section 200 (Truong) - TBA
Communication Channels
Moodle: All major announcements will be posted here. All students will be responsible for checking these announcements.

Email:  Only for emergencies - contact us via private Piazza messages for course-related questions

Piazza: for any questions regarding the course 

Zoom: for lectures, recitations, interview grading meetings, and office hours 


What is Piazza?
Like a classroom, it is a place to ask questions, discuss learning strategies, explore related topics, support your classmates, and contribute to the class. Like a classroom blackboard, all students must read and follow the instructor posts for the course and content information, and announcements.

How do we use Piazza?
It is used for participation grading - see your class syllabus for details It is a place to practice professional collaboration strategies. Instructors may not reply to all inquiries and let other students answer. Many instructors will use Piazza as a reference in the future for a letter of recommendation.

What Piazza is not?
A 24-hour helpdesk or answer forum. A robot tutor. A personal blog. A place for others to completely debug your code.

Posts and questions about classwork should be content-specific and reflect an effort on the student’s behalf. Sample questions that are not content-specific and hence not appropriate: Please tell me how to do #6 Explain #6 I’m lost on #6, Help!

Sample questions that are content specific: I applied the technique from the video to #6, but I get an answer that is too large, could my loop be incorrect? In the video lecture, I understand the algebra steps in #6, but why is 0! =1? Is anyone else getting different answers to #6? It seems to depend on which method I use. (notice the student is not posting the solution)

Any post that interferes with fellow student learning is not acceptable.

Any posts, regardless of intent, that could cause abuse, obstruction, disruption, or interference with student learning, including posts that are disrespectful, aggressive, distracting, or inappropriate, will be saved and deleted at the discretion of the course instructor. Such comments will be reported to the Student Conduct & Conflict Resolution. Please note that there are many ways a post can interfere with student learning. If you have doubts about your message, please edit. For example, sarcasm doesn’t translate well into text and could be a problem. Additionally, calling out specific students’ performance or telling others how to do/work around a problem (ie: Hardcoding or providing links to answers)

What are ZOOM Office Hours?
It is much like a classroom. It is a live web session to ask questions, explore further, discuss strategies, explore related topics, and support your classmates and contribute to the class. Office hours are optional.

How do we use ZOOM Office Hours?
Discuss class content directly with the instructor and other students. Practice professional collaboration strategies. Instructors may use break-out groups or/and guide discussions, at their discretion. Instructors decide which topics will be discussed based on what will optimize learning. Please wear clothes and be aware of your environment.

What are ZOOM Office Hours not?
Answer forum. Tutoring session. Instructors cannot help you completely debug your code. The instructor may not reply to all inquiries and let other students speak as appropriate.

Questions should be specific and reflect an effort on the student’s behalf. Sample questions that are not content-specific and hence not appropriate. Tell me how to do #6 Please explain #6 I’m lost on #6, Help!

Sample questions that are content-specific. I applied the technique from the video to #6, but I get an answer that is too large, could my loop my incorrect? In the video lecture, I understand the algebra steps in #6, but why is 0! =1? Is anyone else getting different answers to #6? It seems to depend on which method I use. (notice the student is not sharing the solution)

Any behavior that interferes with student learning or university activities is not acceptable.

Any behavior, regardless of intent, that could cause abuse, interference, obstruction, disruption, or interference with student learning, including comments that are disrespectful, aggressive, distracting, off-topic, or inappropriate, will not be tolerated and may result in being muted, at the instructor’s discretion. Such behavior will be reported to Student Conduct and Conflict Resolution. For example, dominating group discussions can inhibit others' opportunities to learn and will not be allowed.

Textbook and Material
Computer Systems, A Programmer’s Perspective, 3rd Edition by Bryant and O’Halloran.
ISBN-13: 978-0134092669

ISBN-10: 013409266X

The international edition is acceptable and much cheaper ($30) (Amazon link)

Additional readings will be made available through the course website.


Grading Components 
The course has 4 grading components with the following breakdown:
Weekly quizzes  - 10% of grade
Four non-cumulative exams - 9% each, 36% of grade
Six programming labs - 50% of grade
Weekly lecture quizzes / participation - 4% of grade
Lab Assignments: Your primary assignments will be your “Lab Assignments,” given every 2-3 weeks, each of which will be followed by a grading meeting to review your solution with the instructor or TA. The labs are the primary learning vehicle for this course. The grade meetings are scheduled on the Moodle site typically just before the assignment is due, and will begin after the due date of each Lab. Even if you complete your work, you will not receive a grade unless you conduct a grading session. 

Students will be responsible for signing up for each interview grading no later than the interview grading period start date.

The grades for each lab will be based 40% upon the Task Success (i.e. “does it work”) and 60% upon your explanation of your code/assignment and answering questions about the lab and its concepts. Historically speaking, students that have completed the assignment themselves usually have a little problem passing the Q&A portion of the grade.  

Students may work in teams of up to two for the labs only, but each student will still be responsible for scheduling their own grading meeting with the TA for each lab.  You may help others only to the extent of answering typical questions that arise during compiling, debugging, and executing your lab assignments. 

All assignments are due by the deadline stated.  Extensions will not be granted except at the instructor’s discretion in cases of extreme hardship, emergency, etc. unless otherwise noted.

On the task success 40% portion of the grade, we strongly encourage you to submit even partially working code/assignment by the deadline to obtain partial credit on the 40% for task success.  
You must attend your grading meeting to qualify for grading points.  If you miss your meeting with the TA (without notifying your TA ahead of time with a suitable reason), this may result in a zero grade for the assignment.  The TA is under no obligation to reschedule your appointment if you miss your meeting, so write down your meeting times, and don’t forget them!  Even if you are unable to submit a fully working code/assignment by the deadline, we strongly encourage you to keep working at a full solution for the assignment, which should benefit your understanding and ability to answer questions during the Q&A meeting with the TA.
You must be able to explain every line of your code and answer any questions related to the topics covered by the homework. Not being able to answer those questions can result in a zero for the homework and other penalties. Having comments on each line of your code and reading the comments do not qualify for explaining the code, In those cases, the TA might ask you questions from your code to make sure it has been your own work.
All labs must be written in C and compiled for execution on the class programming environment unless otherwise noted.

Reading Quizzes: You will be assigned reading questions similar to the practice questions from the text. Most reading quizzes will be automatically graded and are designed to help you reify your knowledge of the material in a particular section of the book. You should also attempt the self-study questions in the book (answers at the end of the section).

Exams: You will have four proctored exams. The first two exams cover single chapters, each of which has significant material. The other two exams will cover multiple related chapters of material (see below).

Forum Discussion: Forum posts will appear on Moodle throughout the semester, and you will be responsible for participating in each discussion in a meaningful way.



Lab Information
We have six Labs:
Data Lab
Bomb Lab
Attack Lab
Performance Lab
Shell Lab
Malloc Lab
Every lab is graded 40% code and 60% interview grading.

Exam Information
We have four exams:
Exam 1: Chapters 1, 2
Exam 2: Chapter 3
Exam 3: Chapters 4, 5, 6
Exam 4: Chapters 7, 8, 9

Requirements for COVID-19 (FOR ON-CAMPUS CLASSES, ACTIVITIES, and ANY VISITS TO CAMPUS)
As a matter of public health and safety due to the pandemic, all members of the CU Boulder community and all visitors to campus must follow university, department, and building requirements, and public health orders in place to reduce the risk of spreading infectious disease. Required safety measures at CU Boulder relevant to the classroom setting include: maintain 6-foot distancing when possible, wear a face-covering in public indoor spaces and outdoors while on campus consistent with state and county health orders, clean local work area, practicing hand hygiene, follow public health orders, and if sick and you live off-campus, do not come onto campus (unless instructed by a CU Healthcare professional), or if you live on-campus, please alert CU Boulder Medical Services.


Students who fail to adhere to these requirements will be asked to leave class, and students who do not leave class when asked or who refuse to comply with these requirements will be referred to Student Conduct and Conflict Resolution. For more information, see the policies on COVID-19 Health and Safety and  classroom behavior and the  Student Code of Conduct. If you require accommodation because a disability prevents you from fulfilling these safety measures, please see the “Accommodation for Disabilities” statement on this syllabus.


Before returning to campus, all students must complete the COVID-19 Student Health and Expectations Course. Before coming on to campus each day, all students are required to complete a Daily Health Form. 


Students who have tested positive for COVID-19, have symptoms of COVID-19, or have had close contact with someone who has tested positive for or had symptoms of COVID-19 must stay home and complete the Health Questionnaire and Illness Reporting Form remotely. In this class, if you are sick or quarantined, Let the class instructor know of your absence over email and he/she can guide you on the next steps.


Schedule
Specific deadlines and dates for exams, quizzes, and labs are indicated in the Moodle LMS. You may use the following schedule as an overview of the term, but consult the Moodle Calendar for specific dates.



Grading
The final grades for this class follow the standard percentage breakdown for the College of Engineering: 

93%-100% A 

90%-93%  A- 

87%-90%  B+ 

83%-87%  B 

80%-83%  B- 

77%-80%  C+ 

73%-77%  C 

70%-73%  C- 

67%-70%  D+ 

63%-67%  D 

60%-63%  D- 

0%-59.9%  F



Collaboration Policy
You are welcome and encouraged to work together in learning the material.

Cite Your Sources: If you worked with someone on an assignment, or if your submission includes quotes from a book, a paper, or a website, you should clearly acknowledge the source. Bottom line, feel free to use resources that are available to you as long as the use is reasonable and you cite them in your submission. However, copying answers directly or indirectly from solution manuals, web pages, or your peers is certainly unreasonable.

Inspiration is free: you may discuss homework assignments with anyone. You are especially encouraged to discuss solutions with your instructor and your classmates.

Plagiarism is forbidden: the assignments and code that you turn in should be written entirely on your own. You should not need to consult sources beyond your textbook, class notes, posted lecture slides and notebooks, programming language documentation, and online sources for basic techniques. Copying/soliciting a solution to a problem from the internet or another classmate constitutes a violation of the course’s collaboration policy and the honor code and will result in an F in the course and a trip to the honor council.

Do not search for a solution online: You may not actively search for a solution to the problem from the internet. This includes posting to sources like StackOverflow, Reddit, Chegg, CourseHero, etc.

StackExchange Clarification: Searching for basic techniques in Python/C++ is totally fine. If you want to post and ask “How do I group by two columns, then do something, then group by a third column” that’s fine. What you shouldn’t do is post “Here’s the problem my prof gave me. Give me code!”. That’s cheating.

When in doubt, ask: We’ve tried to lay down some rules and the spirit of the collaboration policy above. However, we cannot be comprehensive. If you have doubts about this policy or would like to discuss specific cases, please ask the instructor. If it has not been described above, you should discuss it with us first.

Note: Other information on the Honor Code can be found at www.colorado.edu/policies/honor.html and www.colorado.edu/academics/honorcode. Collaboration boundaries are hard to define crisply and may differ from class to class. If you are in any doubt about where they lie for a particular course, it is your responsibility to ask the course instructor.



Requirements for COVID-19
As a matter of public health and safety due to the pandemic, all members of the CU Boulder community and all visitors to campus must follow university, department and building requirements and all public health orders in place to reduce the risk of spreading infectious disease. Students who fail to adhere to these requirements will be asked to leave class, and students who do not leave class when asked or who refuse to comply with these requirements will be referred to Student Conduct and Conflict Resolution. For more information, see the policy on classroom behavior and the Student Code of Conduct. If you require accommodation because a disability prevents you from fulfilling these safety measures, please follow the steps in the “Accommodation for Disabilities” statement on this syllabus.

As of Aug. 13, 2021, CU Boulder has returned to requiring masks in classrooms and laboratories regardless of vaccination status. This requirement is a temporary precaution during the delta surge to supplement CU Boulder’s COVID-19 vaccine requirement. Exemptions include individuals who cannot medically tolerate a face covering, as well as those who are hearing-impaired or otherwise disabled or who are communicating with someone who is hearing-impaired or otherwise disabled and where the ability to see the mouth is essential to communication. If you qualify for a mask-related accommodation, please follow the steps in the “Accommodation for Disabilities” statement on this syllabus. In addition, vaccinated instructional faculty who are engaged in an indoor instructional activity and are separated by at least 6 feet from the nearest person are exempt from wearing masks if they so choose.

Accommodation for Disabilities
If you qualify for accommodations because of a disability, please submit your accommodation letter from Disability Services to your faculty member in a timely manner so that your needs can be addressed. Disability Services determines accommodations based on documented disabilities in the academic environment. Information on requesting accommodations is located on the Disability Services website. Contact Disability Services at 303-492-8671 or dsinfo@colorado.edu for further assistance. If you have a temporary medical condition or injury, see Temporary Medical Conditions under the Students tab on the Disability Services website.

Classroom Behavior
Students and faculty each have responsibility for maintaining an appropriate learning environment. Those who fail to adhere to such behavioral standards may be subject to discipline. Professional courtesy and sensitivity are especially important with respect to individuals and topics dealing with race, color, national origin, sex, pregnancy, age, disability, creed, religion, sexual orientation, gender identity, gender expression, veteran status, political affiliation or political philosophy. Class rosters are provided to the instructor with the student’s legal name. We will gladly honor your request to address you by an alternate name or gender pronoun. Please advise me of this preference early in the semester so that I may make appropriate changes to my records. For more information, see the policies on classroom behavior and the  Student Code of Conduct.

Honor Code
All students enrolled in a University of Colorado Boulder course are responsible for knowing and adhering to the Honor Code. Violations of the policy may include plagiarism, cheating, fabrication, lying, bribery, threat, unauthorized access to academic materials, clicker fraud, submitting the same or similar work in more than one course without permission from all course instructors involved, and aiding academic dishonesty. All incidents of academic misconduct will be reported to the Honor Code (honor@colorado.edu); 303-492-5550). Students who are found responsible for violating the academic integrity policy will be subject to nonacademic sanctions from the Honor Code as well as academic sanctions from the faculty member. Additional information regarding the Honor Code academic integrity policy can be found at the Honor Code Office website.

Sexual Misconduct, Discrimination, Harassment and/or Related Retaliation
The University of Colorado Boulder (CU Boulder) is committed to fostering positive and welcoming learning, working, and living environments. CU Boulder will not tolerate acts of sexual misconduct (including sexual assault, exploitation, harassment, dating or domestic violence, and stalking), discrimination, and harassment by members of our community. Individuals who believe they have been subject to misconduct or retaliatory actions for reporting a concern should contact the Office of Institutional Equity and Compliance (OIEC) at 303-492-2127 or cureport@colorado.edu. Information about the OIEC, university policies, anonymous reporting, and campus resources can be found on the OIEC website.

Please know that faculty and instructors have a responsibility to inform OIEC when made aware of incidents of sexual misconduct, discrimination, harassment, and/or related retaliation, to ensure that individuals impacted receive information about options for reporting and support resources.

Religious Holidays
Campus policy regarding religious observances requires that faculty make every effort to deal reasonably and fairly with all students who, because of religious obligations, have conflicts with scheduled exams, assignments, or required attendance.
