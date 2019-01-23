//
// Created by igor on 18.01.19.
//
#include <iostream>
#include "queue2linklist.h"
#include "gtest/gtest.h"
using namespace std;

void init(queue *q) {
    q->Head = NULL;
    q->Tail = NULL;
}

bool Empty(queue *q) {
    return(q->Head == q->Tail);
}

void push(queue *q, int value) {
    q->cur = new queue;
    q->cur->data = value;
    q->cur->next = NULL;
    q->size++;
    if (q->Head == NULL) {
        q->Head = q->cur;
        q->Tail = q->cur;
    }
    else {
        q->Tail->next = q->cur;
        q->cur->prev = q->Tail;
        q->Tail = q->cur;
    }
}

void pop(queue *q) {
    if (Empty(q) != 1) {

        q->cur = q->Head;
        q->Head = q->Head->next;
        q->Head->prev = NULL;
        delete q->cur;
        if (q->Head == NULL) {
            q->Tail = NULL;
        }
        q->size--;
    }else{
        q->cur = q->Head;
        delete q->cur;
        q->Head=NULL;
        q->size--;

    }
}

int length(queue *q) {
    return q->size;
}

void print(queue *q) {
    q->cur = q->Head;
    while (q->cur != NULL) {
        cout << q->cur->data << endl;
        q->cur = q->cur->next;
    }
}
