#ifndef T_4_CPP_STACK_H
#define T_4_CPP_STACK_H

class Stack {
private:
    int *arr;
    int Max;
    int index;
    int count;
public:
    Stack(int);

    bool Push(int);

    bool Is_empty() ;

    bool Is_full();

    int Pop();

    void print();

    int length();

};

#endif //T_4_CPP_STACK_H
