#ifndef T4_T_4_H
#define T4_T_4_H

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

    char *print();

    int length();

};
#endif //T4_T_4_H
