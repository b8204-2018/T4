#include "list_queue_libs.h"

#include <iostream>
#include <cstdlib>
#include<string>



using namespace std;


//инициализация
void init(queue *q) {
	q->first->index = 0;
	q->last->index = 0;
	q->first = NULL;
	q->last = NULL;
}
//проверка на пустоту
bool empty(queue *q) {
	if (q->first == q->last&&q->last == NULL) return true;
	else return false;
}
//определение индекса
void set_ind(queue *q, list *p) {
	p->index = q->last->index++;
}
//добавление элемента в список
void  add_elem(queue *P, int val)//p-указатель список,number-доьавляемый элемент
{
	struct list *el = new list;
	set_ind(P, el);
	el->data = val;
	el->data = NULL;
	if (empty(P) == true) {
		P->first = el;
		P->last = el;
	}
	else {
		P->cur = P->last;
		P->cur->next = el;
		P->last = el;
		P->last = P->cur;
	}

}
//заполнение списка
void fill(queue *P) {
	int k, l;
	cout << "введите кол-во символов " << endl;
	cin >> k;
	cout << "введите значения ";
	for (int i = 0; i < k; i++) {
		cin >> l;
		add_elem(P, l);
	}
}
void change_ind(queue *P) {
	int i = 1;
	P->cur = P->first;
	while (P->cur->next == NULL) {
		P->cur->index = i;
		P->cur = P->cur->next;
		i++;
	}
}
/*фунция вставляет элемент в список но индексу
-если задаваемый индекс больше наиьольшего, то добавляемому элементу присваивает индекс больше на 1 последнего
-индекс не может быть залан меньше еденицы
*/
void insert(queue *P, int element, int ind) {
	if (empty(P) != true) {
		P->cur = P->first;
		while ((P->cur->index == ind) || (P->cur->next == NULL)) {
			P->cur = P->cur->next;
		};
		if (P->cur->next = NULL) {
			add_elem(P, element);
		}
		else {
			struct list *cur_next = new list;
			struct list *k = new list;//новая переменная
			k->data = element;
			//вставляем k
			cur_next = P->cur->next;
			P->cur->next = k;
			k->next = cur_next;
			//перенумировывание
			change_ind(P);

		}

	}
	else {
		add_elem(P, element);
	}
}
//Удаляет элемент по индексу
void deletE(queue *P, int ind) {
	if (empty(P) != true) {
		struct list *cur_next = new list;
		struct list *cur_pred = new list;
		if (ind == 1) {
			P->cur = P->first;
			P->first = P->first->next;
			delete(P->cur);
			change_ind(P);
		}
		else {
			P->cur = P->first->next;
			cur_pred = P->first;
			while ((P->cur->index == ind) || (P->cur->next == NULL)) {
				P->cur = P->cur->next;
				cur_pred = cur_pred->next;
			};
			if (P->cur->next != NULL) {
				cur_pred = P->cur->next;
				delete(P->cur);
				change_ind(P);

			}

		}
	}
}
//показывает чему равен элемент по индексу
int get(queue *P, int ind) {
	P->cur = P->first;

	while ((P->cur->index == ind) || (P->cur->next = NULL)) {
		P->cur = P->cur->next;
	}
	if (P->cur->next = NULL) {
		return -909;
	}
	else {
		return P->cur->data;
	}
}
//устанавливает элемент в индекс
void set(queue *P, int elem, int ind) {
	P->cur = P->first;
	while ((P->cur->index == ind) || (P->cur->next == NULL)) {
		P->cur = P->cur->next;
	}
	if ((P->cur->next != NULL))P->cur->data = elem;

}

void print(queue *P) {
	P->cur = P->first;
	while ((P->cur->next == NULL)) {
		cout << P->cur->data << " ";
		P->cur = P->cur->next;

	}

}
int lenghtS(queue *P) {
	if (empty(P) != true)return P->last->index;
	else return 0;
}

