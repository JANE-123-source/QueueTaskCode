#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "QueueOperationFunction.h"

// Function to initialize the queue
void Queue_init(Queue* q) {
	q->front = -1;
	q->rear = -1;
}

int Queue_isEmpty(Queue* q) {
	return (q->front == -1);
}
int Queue_isFull(Queue* q) {
	return(q->rear == MAX_QUEUE_SIZE - 1);
}

// Function to add an element into the queue
void Queue_enqueue(Queue* q, int element) {

        if (Queue_isFull(q)) {
		printf("Queue is full, cannot enqueue.\n");
		return;
	}
	
	if (q->front == -1) {

		q->front = 0;
	}

	q->rear++;
	q->array[q->rear] = element;
	printf("Enqueued %d \n", element);
	return;
}

// Function to dequeue an element

void Queue_dequeue(Queue* q) {
	if (Queue_isEmpty(q)) {
		printf("Queue is empty, cannot dequeue.\n");
		return;
	}
	int element = q->array[q->front];
	if (q->front == q->rear) {
		q->front = q->rear = -1;
	}
	else {
		q->front++;

	}
	printf("Dequeued %d \n", element);
	return;
}
// Function to display Queue
void Queue_display(Queue* q) {
	if (Queue_isEmpty(q)) {
		printf("Queue is empty. \n");
		return;
	}
	printf("Queue contents: ");
	for (int i = q->front; i <= q->rear; i++) {
		printf("%d ", q->array[i]);
	}
	printf("\n");
	return;
}

// Function to peek first element of Queue
int Queue_peek(Queue* q) {
	if (Queue_isEmpty(q)) {
		printf("Queue is empty, cannot peek. \n");
		return -1;
	}
	return q->array[q->front];
}
