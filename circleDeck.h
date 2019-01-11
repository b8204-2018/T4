//
// Created by polina on 19.12.18.
//

#ifndef T4_CIRCLEDECK_H
#define T4_CIRCLEDECK_H

#include <iostream>

struct myDeck{
    int size;
    myDeck();
    myDeck(int n);
    int* deck;
    int front, back;
    bool empty;
    void push_front (int elem);
    void push_back (int elem);
    int pop_front();
    int pop_back();
    char* print();
    int length();
    friend std:: ostream& operator << (std::ostream &out, myDeck d);
};


#endif //T4_CIRCLEDECK_H
