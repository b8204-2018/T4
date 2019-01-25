#ifndef DEQUE_CPP_DEQUE_H
#define DEQUE_CPP_DEQUE_H

class Deque {
private:
    int *d;
    int max;
    int n;
    int size;



public:
    Deque(int);

    void PushFront(int);
    void PushBack(int);
    int PopFront();
    int PopBack();
    void Print();
    int length();
};

#endif //DEQUE_CPP_DEQUE_H
