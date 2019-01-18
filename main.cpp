#include <iostream>
#include "gtest/gtest.h"

using namespace std;

struct list {
    int data;
    struct list *next;
};
struct queue {
    short int size;
    struct list *first, *last, *cur;
};

void init(queue *q) {
    q->first = NULL;
    q->last = NULL;
}

bool empty (queue *q) {
    return (q->first==q->last);
}

void push(queue *Q, int value) {
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

int main() {
    queue *q;
    int emp = 0;
    init(q);
    int a = 1;
    for (int i = 0; i < 5; i++) {
        push(q, a);
        print(q);
        a++;
    }
    cout << "Length is: ";
    cout << length(q) << "\n";
    cout << "\n";
    while(q->first != NULL) {
        emp = pop(q);
    }
    if (emp == 0){
        cout << "Queue is empty";
    }

    TEST( Test, push_left) {
        Tvector  A;
        int element(18);
        create(A);
        push_left(A, element);
        EXPECT_EQ(A.arr[0], element);
    }

    return 0;
}