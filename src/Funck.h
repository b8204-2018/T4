#ifndef STACK_STACK_H
#define STACK_STACK_H


struct A {
    int key;
};

struct List {
    int a;
    List* next;
};
int size();
void print(List *b);
void init(List **begin, int n);
void Add_begin(List **begin, int n);
void Insert(List **begin, const int n, int index);
void Delete(List **begin, int index);
int get(List *begin, int index);
void set1(List **begin, int index, int el);


#endif //STACK_STACK_H