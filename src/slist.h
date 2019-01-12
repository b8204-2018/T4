#ifndef T4_SLIST_H
#define T4_SLIST_H

struct List {
    int m_value;
    struct List *m_next;
};

int length (List *head);

struct List *push (List *&head, int value);

int pop (List *&head);

void print (List *head);

#endif //T4_SLIST_H
