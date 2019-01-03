//
// Created by polina on 19.12.18.
//

#include <iostream>
#include "circleDeck.h"

#define CREATE_ERROR "Deck's size must be an positive integer";
#define IS_FULL  "Deck is full";
#define IS_EMPTY "Deck is empty";

const int defSize = 10;


myDeck::myDeck() {
    size = defSize;
    deck = new int[size];
    front = size / 2;
    back = size / 2;
};

myDeck::myDeck(int n) {
    if (n < 1) {
        throw CREATE_ERROR;
    }
    size = n;
    deck = new int[size];
    front = size / 2;
    back = size / 2;

};


void myDeck::push_front(int elem) { //front указывает на ячейку, в которой уже есть элемент
    if (front - 1 == back) {
        throw IS_FULL;
    }

    if (front == 0) {
        front = size;
    }

    deck[--front] = elem;

};

void myDeck::push_back(int elem) { //back указывает на пустую ячейку. В предыдущей ячейке есть элемент
    if (back + 1 == front) {
        throw IS_FULL;
    }о
    if (back + 1 == size) {
        back = 0;
        deck[size - 1] = elem;
    }
    else{
        deck[back++] = elem;
    }

};

int myDeck::pop_front() {
    if (front == back) {
        throw IS_EMPTY;
    }
    if (front + 1 == size) {
        int i = front;
        front = 0;
        return deck[i];
    }
    return deck[front++];
};

int myDeck::pop_back() {
    if (front == back) {
        throw IS_EMPTY;
    }
    if (back - 1 < 0){
        back = size;
    }
    return deck[--back];
};

bool myDeck::empty() {
    return (front == back);
};

void myDeck::print() {
    for (int i = front; i != back + 1; i++) {
        std::cout << deck[i++] << ' ';
        if (i == size) {
            i = 0;
        }
    }
    std::cout << std::endl;
};

int myDeck::length() {
    if (front == back) {
        return 0;
    } else {
        int count = 0;
        for (int i = front; i != back; i++) {
            if (i == size) {
                i = -1;
                count--;
            }
            count++;
        }
        return count;
    }
}

