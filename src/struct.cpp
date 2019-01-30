#include "struct.h"
#include <iostream>
#include <cstring>

using namespace std;

elementSpiska *Head;
elementSpiska *Tail;

spisok::spisok(){
    Head = Tail = nullptr;
}

spisok::~spisok(){
    delAllSpisok();
}

void spisok::addElemInSpisok(int value){
    elementSpiska *addElem = new elementSpiska;
    addElem->value = value;
    addElem->Next = Head;
    if(Head != nullptr){
        Head = addElem;
    }
    else{
        Head = Tail = addElem;
    }
}

void spisok::deleteElem() {
    elementSpiska *delElem = Tail;
    elementSpiska *newTail = Head;
    bool found = false;
    if (delElem == newTail) {
        delete delElem;
        Head = Tail = nullptr;
    } else {
        while (found == false) {
            if (newTail->Next == delElem) {
                delete delElem;
                newTail->Next = nullptr;
                Tail = newTail;
                found = true;
            }
            newTail = newTail->Next;
        }
    }
}

void spisok::delAllSpisok(){
    while(Head != nullptr)
        deleteElem();
}

void spisok::printSpisok(){
    elementSpiska *addElem = Head;
    while(addElem != nullptr){
        cout << addElem->value << " ";
        addElem = addElem->Next;
    }
}

void spisok::randomSpisok(int razmer){
    for(size_t i = 0; i < razmer; i++) {
        elementSpiska *addElem = new elementSpiska;
        addElem->value = rand() % 100 + 1;
        addElem->Next = Head;
        if (Head != nullptr) {
            Head = addElem;
        } else {
            Head = Tail = addElem;
        }
    }
}

