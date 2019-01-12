//
// Created by 1 on 10.01.2019.
//

#ifndef T4_T_4_H
#define T4_T_4_H

class Stack {
private:
    int *arr;
    int Max;//максимальное значение стека
    int index;//текущий элемент в стеке
    int count;//счётчик кол-ва элементов в стеке
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
