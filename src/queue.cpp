#include <iostream>
#include "gtest/gtest.h"
#include "queue.h"

const int max = 5;

using namespace std;

void init(queue *q) {
    q->first = NULL;
    q->last = NULL;
}

bool empty (queue *q) {
    return (q->first==q->last);
}

void push(queue *Q, int value) {
    if ( Q->size == max){
        throw std::length_error ("Queue is full.");
    }
    Q->cur = new list;
    Q->cur->data = value;
    Q->cur->next = NULL;
    Q->size++;
    if (Q->first == NULL) {
        Q->first = Q->cur;
        Q->last = Q->cur;
    }
    else {
        Q->last->next = Q->cur;
        Q->last = Q->cur;
    }
}

int length(queue *l) {
    return l->size; }

int pop (queue *Q) {
    if (Q->size == 0){
        throw std::length_error ("Queue is empty.");
    }
    Q->cur = Q->first;
    Q->first = Q->first->next; //смещение указателя
    delete Q->cur;
    if (Q->first == NULL) {
        Q->last = NULL;
    }
    Q->size--;
    return Q->size;
}

int print(queue *q) {
    int p;
    while (q->cur != NULL) {
        p = q->cur->data;
        cout << q->cur->data;
        q->cur = q->cur->next;
    }
    q->cur = q->first;
    return (empty(q)== true);
}