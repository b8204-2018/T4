//
// Created by polina on 19.12.18.
//

#include <iostream>
#include "circleDeck.h"

#define ERR -1;

const char CREATE_ERROR[] = "Количество элементов дека должно быть натуральным числом";
const char IS_FULL[] = "Дек переполнен";
const char IS_EMPTY[] = "Дек пуст";
const char NOT_INIT[] = "Невозможны операции с неопределенным деком";

const int defSize = 10;

void myDeck::notInit(){
    try{
        if (size == 0){
            throw ERR;
        }
    }
    catch(int i){
        std:: cout << NOT_INIT << std:: endl;
    }
};

myDeck::myDeck() {
    size = defSize;
    deck = new int [size];
    front = 5;
    back = 5;
};

myDeck::myDeck(int n) {
    try {
        if (n < 1) {
            throw ERR;
        }
        size = n;
        deck = new int[size];
        front = size/2;
        back = size/2;
    }
    catch (int i) {
        std::cout << CREATE_ERROR << std:: endl;
        size = 0;
        front = 0;
        back = 0;
        deck = nullptr;
    }

};

void myDeck::reInit(int n) {
    try {
        if (n < 1) {
            throw ERR;
        }
        size = n;
        deck = new int[size];
        front = size/2;
        back = size/2;
    }
    catch (int i) {
        std::cout << CREATE_ERROR << std:: endl;
        size = 0;
        front = 0;
        back = 0;
        deck = nullptr;
    }
    size = n;
    if (deck != nullptr){
        delete [] deck;
    }
    deck = new int[size];
    front = size/2;
    back = size/2;
};

void myDeck::push_front(int elem) {
    notInit();
    if (front == 0) {
        front = size;
    }
    try {
        if (front - 1 == back) {
            throw ERR;
        }
        deck[--front] = elem;
    }
    catch (int i) {
        std::cout << IS_FULL << std:: endl;
    }
};

void myDeck::push_back(int elem) {
    notInit();
    if (back == size - 1) {
        back = -1;
    }
    try {
        if (back + 1 == front) {
            throw ERR;
        }
        deck[++back] = elem;
    }
    catch (int i) {
        std::cout << IS_FULL << std:: endl;
    }
};

int myDeck::pop_front() {
    notInit();
    try {
        if (front == back) {
            throw ERR;
        }
        return deck[front++];
    }
    catch (char *str) {
        std::cout << IS_EMPTY << std:: endl;
    }
};

int myDeck::pop_back() {
    notInit();
    try {
        if (front == back) {
            throw ERR;
        }
        return deck[back--];
    }
    catch (char *str) {
        std::cout << IS_EMPTY << std:: endl;
    }
};

bool myDeck::empty() {
    return (front == back);
};

void myDeck::print() {
    notInit();
    for (int i = front; i != back + 1; i++){
        std:: cout << deck[i++] << ' ';
        if (i == size){
            i = 0;
        }
    }
};

int myDeck::length() {
    notInit();
    int count = 0;
    for (int i = front; i != back + 1; i++){
        count++;
        i++;
        if (i == size){
            i = 0;
        }
    }
    return count;
}

