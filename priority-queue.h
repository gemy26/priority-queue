//
// Created by Ahemed on 11/12/2022.
//

#ifndef PRIORITY_QUEUE_PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_PRIORITY_QUEUE_H
typedef char Entrytype ;
typedef struct node {
     Entrytype e;
     int Priority;
    struct node *next;
    struct node * previous;
}Node;
typedef struct{
    int size;
    Node *front;
    //Node *rear;
}queue;
void createpriorityqueue(queue *q);
void insert_in_priorityqueue(queue*q,Entrytype e, int priority);
void loop(queue *q);
void serve_process(queue *q,Entrytype *e);
int size_of_priority_queue(queue *q);
#endif //PRIORITY_QUEUE_PRIORITY_QUEUE_H
