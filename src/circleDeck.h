//
// Created by polina on 19.12.18.
//

#ifndef T4_CIRCLEDECK_H
#define T4_CIRCLEDECK_H

struct myDeck{
    int size;
    myDeck();
    myDeck(int n);
    int* deck;
    int front, back;
    void push_front (int elem);
    void push_back (int elem);
    int pop_front();
    int pop_back();
    bool empty();
    void reInit(int n);
    void notInit();
};


#endif //T4_CIRCLEDECK_H
