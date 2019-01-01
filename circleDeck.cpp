//
// Created by polina on 19.12.18.
//

#include <iostream>
#include "circleDeck.h"

#define CREATE_ERROR "Количество элементов дека должно быть натуральным числом";
#define IS_FULL  "Дек переполнен";
#define IS_EMPTY "Дек пуст";

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


void myDeck::push_front(int elem) {
    if (front == 0) {
        front = size;
    }
    if (front - 1 == back) {
        throw IS_FULL;
    }
    deck[--front] = elem;

};

void myDeck::push_back(int elem) {
    if (back == size - 1) {
        back = -1;
    }
    if (back + 1 == front) {
        throw IS_FULL;
    }
    deck[++back] = elem;

};

int myDeck::pop_front() {
    if (front == back) {
        throw IS_EMPTY;
    }
    return deck[front++];

};

int myDeck::pop_back() {
    if (front == back) {
        throw IS_EMPTY;
    }
    return deck[back--];


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
};

int myDeck::length() {
    int count = 0;
    for (int i = front; i == back + 1; i++) {
        count++;
        i++;
        if (i == size) {
            i = 0;
        }
    }
    return count;
}

