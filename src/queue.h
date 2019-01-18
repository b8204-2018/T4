#ifndef T4_QUEUE_H
#define T4_QUEUE_H

struct list {
    int data;
    struct list *next;
};
struct queue {
    short int size;
    struct list *first, *last, *cur;
};

void init(queue *q);
bool empty (queue *q);
void push(queue *Q, int value);
int length(queue *l);
int pop (queue *Q);
int print(queue *q);

#endif //T4_QUEUE_H
