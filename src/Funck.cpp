#include <iostream>
#include "Funck.h"

using namespace std;
int the_size = 1;

int size(){
    return the_size;
}
void print(List *b) {
    List *print = b; //print указывает на первый элемент

    while (print) {
        cout << print->a << endl;
        print = print->next;
    }
    cout << "NULL" << endl;
    delete print;
}
void init(List **begin, int n) {
    *begin = new List;
    (*begin)->a = 0;
    (*begin)->next = NULL;
    List *end = *begin;
    for (int i = 0; i < n-1; i++) {
        end->next = new List;
        end = end->next;
        end->a = i;
        end->next = NULL;
        the_size++;
    }

}

void Add_begin(List **begin, int n) {
    List* t = new List;
    t->a = n;
    t->next = *begin;
    *begin = t;
    the_size++;
}

void Insert(List **begin, const int n, int index) {
    if (index < 0) return;
    List *head = *begin ;
    if (the_size <= index) index = the_size;
    for (int i = 0; i < index - 1; i++) {
        head = head->next;
    }
    List *newA = new List;
    newA->a = n;
    newA->next = head->next;
    head->next = newA;
    the_size++;

}

void Delete(List **begin, int index) {
    if (index < 0) return;
    List *head = *begin;
    if (the_size <= index) index = the_size-1;
    for (int i = 0; i < index - 1; i++) {
        head = head->next;
    }
    List *toDel = head->next;
    head->next = toDel->next;
    delete toDel;
    the_size--;

}
int get(List *begin, int index){
    if (index < 0) return -1;
    List *print = begin; //print указывает на первый элемент
    int a=0;
    while (print) {
        if (index == a) {
            return print->a;
        }
        a++;
        print = print->next;
    }
    delete print;
}
void set1(List **begin, int index, int el) {
    if(index>the_size)index=the_size;
    List *head = *begin;
    if (the_size <= index) index = the_size-1;
    for (int i = 0; i < index ; i++) {
        head = head->next;
    }
    head->a = el;

}