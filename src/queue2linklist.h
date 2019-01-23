//
// Created by igor on 18.01.19.
//

#ifndef UNTITLED13_QUEUE2LINKLIST_H
#define UNTITLED13_QUEUE2LINKLIST_H

struct queue {
    short int size;
    int data;
    struct queue *Head, *Tail, *cur, *next,*prev;
};

void init(queue *q);
bool Empty(queue *q);
void push(queue *q, int value);
void pop(queue *q);
int length(queue *q);
void print(queue *q);
#endif //UNTITLED13_QUEUE2LINKLIST_H
