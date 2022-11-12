#include <stdio.h>
#include "priority-queue.h"

void menue(){
    printf("1. Add a New Process.\n");
    printf("2. Serve a Process.\n");
    printf("3. Number of Waiting Processes.\n");
    printf("4. Exit menu.\n");
}
void add(queue *q){
    Entrytype value;
    scanf(" %c",&value);
    int priority;
    scanf("%d",&priority);
    insert_in_priorityqueue(q,value,priority);
}
void serve(queue *q){
    Entrytype e;
    serve_process(q,&e);
    printf("%c\n",e);
}
void size(queue *q){
    printf("%d\n", size_of_priority_queue(q));
}
int main() {
    queue q;
    createpriorityqueue(&q);

    int answer;
    do{
        menue();

        scanf("%d",&answer);
        switch (answer) {
            case 1:
                add(&q);
                break;
            case 2:
                serve(&q);
                break;
            case 3:
                size(&q);
                break;
        }
    }while(answer != 4);



}
