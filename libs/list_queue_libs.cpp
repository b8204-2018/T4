#include "list_queue_libs.h"

#include <iostream>
#include <cstdlib>
#include<string>



using namespace std;


//инициализация
void queue:: init() {
	first->index = 0;
	last->index = 0;
	first = NULL;
	last = NULL;
}
//проверка на пустоту
bool  queue::empty() {
	if (first == last&&last == NULL) return true;
	else return false;
}
//определение индекса
void queue::set_ind( list *p) {
	p->index = last->index++;
}
//добавление элемента в список
void  add_elem( int val)//p-указатель список,number-доьавляемый элемент
{
	struct list *el = new list;
	set_ind(el);
	el->data = val;
	el->data = NULL;
	if (empty() == true) {
		first = el;
		last = el;
	}
	else {
		cur = last;
		cur->next = el;
		last = el;
		last = cur;
	}

}
//заполнение списка
void  queue::fill() {
	int k, l;
	cout << "введите кол-во символов " << endl;
	cin >> k;
	cout << "введите значения ";
	for (int i = 0; i < k; i++) {
		cin >> l;
		add_elem( l);
	}
}
void  queue::change_ind() {
	int i = 1;
	cur = first;
	while (cur->next == NULL) {
		cur->index = i;
		cur = cur->next;
		i++;
	}
}
/*фунция вставляет элемент в список но индексу
-если задаваемый индекс больше наиьольшего, то добавляемому элементу присваивает индекс больше на 1 последнего
-индекс не может быть залан меньше еденицы
*/
void  queue::insert(int element, int ind) {
	if (empty() != true) {
		cur = first;
		while ((cur->index == ind) || (cur->next == NULL)) {
			cur = cur->next;
		};
		if (cur->next = NULL) {
			add_elem( element);
		}
		else {
			struct list *cur_next = new list;
			struct list *k = new list;//новая переменная
			k->data = element;
			//вставляем k
			cur_next = cur->next;
			cur->next = k;
			k->next = cur_next;
			//перенумировывание
			change_ind();

		}

	}
	else {
		add_elem( element);
	}
}
//Удаляет элемент по индексу
void  queue::deletE( int ind) {
	if (empty() != true) {
		struct list *cur_next = new list;
		struct list *cur_pred = new list;
		if (ind == 1) {
			cur = first;
			first = first->next;
			delete(cur);
			change_ind();
		}
		else {
			cur = first->next;
			cur_pred = first;
			while ((cur->index == ind) || (cur->next == NULL)) {
				cur = cur->next;
				cur_pred = cur_pred->next;
			};
			if (cur->next != NULL) {
				cur_pred = cur->next;
				delete(cur);
				change_ind();

			}

		}
	}
}
//показывает чему равен элемент по индексу
int  queue::get( int ind) {
	cur = first;

	while ((cur->index == ind) || (cur->next = NULL)) {
		cur = cur->next;
	}
	if (cur->next = NULL) {
		return -909;
	}
	else {
		return cur->data;
	}
}
//устанавливает элемент в индекс
void  queue::set( int elem, int ind) {
	cur = first;
	while ((cur->index == ind) || (cur->next == NULL)) {
		cur = cur->next;
	}
	if ((cur->next != NULL)) cur->data = elem;

}

void  queue::print() {
	cur = first;
	while ((cur->next == NULL)) {
		cout << cur->data << " ";
		cur = cur->next;

	}

}
int  queue::lenghtS() {
	if (empty() != true)return last->index;
	else return 0;
}

