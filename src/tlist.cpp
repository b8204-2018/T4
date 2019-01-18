#include "tlist.h"
#include <iostream>




const int max = 20;
int length(List *head){
    int i = 0;
    while (head != nullptr){
        i++;
        head = head->next;
    }
    return i;
}

void create(List *&head, int element){
    head = new List;
    head->value = element;
    head->next = nullptr;
    head->prev = nullptr;
}

void addFirst(List *&head, int element){
    List *add = new List;
    add->value = element;
    add->prev = nullptr;
    add->next = head;
    head->prev = add;
    List *p = head;
    head = add;
    add = p;
}

void insert(List *&head, int element, int index){
        if (index <= 0 || (index > length(head) && index != 1)){
            throw std::invalid_argument (INVALIDINDEX);
        }
        if (length(head) == max){
            throw std::length_error (FULL);
        }
    if (length(head) == 0){
        create(head, element);
    } else if (index == 1){
        addFirst(head, element);
    } else {
        List *current = head;
        List *add = new List;
        add->value = element;
        for (int i = 1; i < index - 2; i++){
            current = current->next;
        }
        add->next = current->next;
        current->next->prev = add;
        add->prev = current;
        current->next = add;
    }
}

void deleteL(List *&head, int index){
    if (index <= 0 || index > length(head) ){
        throw std::invalid_argument (INVALIDINDEX);
    }
    List *current = head;
    if (index == 1){
        head = head->next;
        head->prev = nullptr;
        delete current;
    } else if (index == length(head)){
        for (int i = 1; i < index ; i++) {
            current = current->next;
        }
        current->prev->next = nullptr;
        delete current;
    } else {
        for (int i = 1; i < index - 2; i++) {
            current = current->next;
        }
        List *p = current->next;
        current->next->next->prev = current;
        current->next = current->next->next;
        delete p;
    }
}

int get(List *head, int index){
    if (index <= 0 || index > length(head) ){
        throw std::invalid_argument (INVALIDINDEX);
    }
    int x;
    for (int i = 1; i < index; i++){
        head = head->next;
    }
    x = head->value;
    return x;
}

void set(List *&head, int element, int index){
    if (index <= 0 || index > length(head) ){
        throw std::invalid_argument (INVALIDINDEX);
    }
    List *current = head;
    for (int i = 1; i < index; i++){
        current = current->next;
    }
    current->value = element;
}

void print(List *head){
    if (length(head) == 0){
        printf(EMPTY);
    } else{
        printf("List: ");
        while (head != nullptr) {
            printf("%d ", head->value);
            head = head->next;
        }
        printf("\n");
    }
}