#ifndef T4_TLIST_H
#define T4_TLIST_H


#define EMPTY "List is empty\n"
#define INVALIDINDEX "Error: invalid index."
#define FULL "List is full."


struct List {
    int value;
    struct List *next;
    struct List *prev;
};


void insert(List *&head, int element, int index);

void deleteL(List *&head, int index);

int get(List *head, int index);

void set(List *&head, int element, int index);

int length(List *head);

void print(List *head);

#endif //T4_TLIST_H
