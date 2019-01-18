#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};

struct myStack
{
    struct node *pointer;
    int count;
};

struct myStack *create_stack()
{
    struct myStack *temp = (struct myStack *)malloc(sizeof(struct myStack));
    temp->pointer = nullptr;
    temp->count = 0;
    return temp;
}

void delete_element(struct node *elem)
{
    if (elem->next) delete_element(elem->next);
    free(elem);
}

void delete_stack(struct myStack *st)
{
    if (!st)
        return;
    if (st->pointer)
        delete_element(st->pointer);
    free(st);
}

void push_to_stack(struct myStack *st, int value)
{
    if (!st)
        return;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->value = value;
    if (!st->pointer){
        temp->next = nullptr;
        st->pointer = temp;
    }
    else{
        temp->next = st->pointer;
        st->pointer = temp;
    }
    st->count++;
}

int pop_from_stack(struct myStack *st)
{
    if (!st || !st->pointer)
        return 0;
    int value = st->pointer->value;
    struct node *del = st->pointer;
    st->pointer = st->pointer->next;
    free(del);
    st->count--;
    return value;
}


int is_empty(struct myStack *st)
{
    return !st->pointer;
}

int main()
{
    struct myStack *st = create_stack();
    int i;
    for (i = 5; i < 10; ++i)
        push_to_stack(st, i);
    while (!is_empty(st))
    {
        printf("%d\n", pop_from_stack(st));
    };
    delete_stack(st);
    return 0;
}