#pragma once
#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 10

    typedef struct Queue {
        int array[MAX_QUEUE_SIZE];
        int front;
        int rear;
    } Queue;

    void Queue_init(Queue* q);
    int Queue_isEmpty(Queue* q);
    int Queue_isFull(Queue* q);
    void Queue_enqueue(Queue* q, int element);
    void Queue_dequeue(Queue* q);
    void Queue_display(Queue* q);
    int Queue_peek(Queue* q);



#ifdef __cplusplus
}
#endif
