# QueueTaskCode
Queue module source code project
This project implemented a QUEUE operation using object-oriented programming concept in C language.
A data struct is used to simulate an object.

It has some function to operate the queue
enqueue, dequeue, display queue, peek queue

There is a google test project to do the unit test
Test project is stored as a seperate repository.

A patch branch is created from the main branch to fix the enqueue overflow issue. One of unit testcases is failed because of missing full queue check here. After adding the full queue check, the failed testcase is passed. And the modification is merged to main branch.




