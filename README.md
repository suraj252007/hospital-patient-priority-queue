# hospital-patient-priority-queue
Hospital Patient Priority Queue

About the Project

This project implements a simple Hospital Patient Priority Queue using C.

The program decides which patient should be treated next based on their priority number.

Priority Levels

- 1 – Emergency
- 2 – Urgent
- 3 – Routine

The patient with the lowest priority number is treated first.

Features

1. Add a patient with a name and priority.
2. Find the most urgent patient.
3. Treat and remove the next patient.
4. Display the treatment order.
5. Handle a newly added Emergency patient.

Test Case

The program first adds:

Patient| Priority
P1| 3
P2| 1
P3| 2
P4| 1
P5| 3
P6| 2

After treating three patients, a new Emergency patient P7 with priority 1 is added.

The program confirms that P7 is treated before the remaining Urgent and Routine patients.

Language

C

How to Run

Compile the program:

gcc hospital_priority_queue.c -o hospital_priority_queue

Run it:

./hospital_priority_queue
