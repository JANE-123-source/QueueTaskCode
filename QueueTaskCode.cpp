
// QueueModuleDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "QueueOperationFunction.h"

int main() {

	// Create and initialize a Queue object
	Queue q;
	Queue_init(&q);

	// Queue operations

	Queue_enqueue(&q, 10);

	Queue_enqueue(&q, 20);

	Queue_enqueue(&q, 30);

	Queue_display(&q);

	Queue_dequeue(&q);
	Queue_display(&q);

	printf("Front element is: %d \n", Queue_peek(&q));

	Queue_dequeue(&q);
	Queue_dequeue(&q);
	Queue_dequeue(&q);

	return 0;

}