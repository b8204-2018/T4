#include <iostream>
#include "slist.h"

const int max = 20;

struct List *init(int value){
    List *head = new List;
    head->m_value = value;
    head->m_next = nullptr;
    return head;
}

struct List *add(List *&head, int value){
    List *elem = new List;
    elem->m_value = value;
    elem->m_next = head;
    head = elem;
    return head;
}

int length (List *head) {
    int i = 0;
    while (head != nullptr){
        i++;
        head = head->m_next;
    }
    return i;
}

struct List *push (List *&head, int value){
    if (length(head) == max){
        throw std::length_error ("List is full.");
    }
    if (head == nullptr){
        head = init(value);
    } else {
        head = add (head, value);
    }
    return head;
}

int pop (List *&head){
    if (length(head) == 0){
        throw std::length_error ("List is empty.");
    }
    int x = head->m_value;
    List *p = head->m_next;
    List *elem = head;
    head = p;
    delete elem;
    return x;
}

void print (List *head){
    if (head == nullptr){
        printf("List is empty.\n");
    } else {
        List *current = head;
        printf("List: ");
        for (int i = 0; i < length(head); i++){
            printf("%d ", current->m_value);
            current = current->m_next;
        }
    }
    printf("\n");
}