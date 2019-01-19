#ifndef T4_CPP_DEQUE_H
#define T4_CPP_DEQUE_H

class Deque {
private:
    int *d;
    int max;
    int n;
    int size;
    int start_;
    int end_;


public:
    Deque(int);

    void PushFront(int);
    void PushBack(int);
    int PopFront();
    int PopBack();
    void Print();
    int length();
};

#endif //T_4_CPP_STACK_H
