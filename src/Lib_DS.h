//
// Created by denis on 03.01.19.
//

#ifndef T4_LIB_DS_H
#define T4_LIB_DS_H

class deque { //class double-ended-queue
private:
    unsigned size;
    int *vector;
    bool empty;
    int right;
    int left;
    int count;
public:
    deque(int);

    void left_push(int);

    void right_push(int);

    int left_pop();

    int right_pop();

    void print();

    int length();

};

#endif //T4_LIB_DS_H
