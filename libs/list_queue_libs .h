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

	void init();
	bool empty();
	void set_ind( list *p);
	void  add_elem( int val);
	void fill();
	void change_ind();
	void insert(int element, int ind);
	oid deletE( int ind);
	int get( int ind);
	void set( int elem, int ind);
	void print();




};

#endif //LIST_QUEUE_LIBS_H