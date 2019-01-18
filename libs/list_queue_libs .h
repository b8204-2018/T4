#ifndef LIST_QUEUE_LIBS_H
#define LIST_QUEUE_LIBS_H

struct list {
	int data;
	int index;
	struct list *next;
};

struct queue
{
	short int size;
	struct list *first, *last, *cur;

};

#endif //LIST_QUEUE_LIBS_H