//
// Created by Ahmed on 11/12/2022.
//
#include "priority-queue.h"
#include<stdio.h>
#include<malloc.h>
void createpriorityqueue(queue *q){
    q->front = NULL;
   // q->rear = NULL;
    q->size = 0;
}
void insert_in_priorityqueue(queue*q,Entrytype e, int priority){
    q->size++;
    Node *p = (Node*) malloc(sizeof (Node));
    p->next=NULL;
    p->previous=NULL;
    p->e = e;
    p->Priority = priority;

       if(!q->front){
           q->front = p;
       }
else {
           Node *temp = q->front;
           while (temp->next && temp->Priority < priority) {
               temp = temp->next;
           }
           if(!temp->next && priority >= temp->Priority){
               p->previous = temp;
               temp->next = p;
               return;
           }

           p->next = temp;
           p->previous = temp->previous;
           if(temp->previous)
               temp->previous->next = p;
           else
               q->front = p;
           temp->previous = p;
       }

   // printf("%d",q->size);
}
void loop(queue *q){
    Node * p;
    p = q->front;
    while(p){
        printf("%c %d\n",p->e,p->Priority);
        p = p->next;
    }
}
void serve_process(queue *q,Entrytype *e){
    *e = q->front->e;
    Node * temp;
    if(q->size ==1 ){
        q->front = NULL;
        return;
    }
    temp = q->front->next;
    free(q->front);
    q->front = temp;
    temp->previous = NULL;
    q->size--;
}
int size_of_priority_queue(queue *q){
    return q->size;
}