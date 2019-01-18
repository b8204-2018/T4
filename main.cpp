#include "pch.h"
#include <iostream>

using namespace std;

struct list {
	int data;
	struct list *next;
	struct list *prev;
};
struct que {
	int size;
	bool emptys;
	struct list *first, *last, *cur, *prev;


	que init() {
		first = NULL;
		last = NULL;
	}

	que is_empty() {
		emptys = first == last;
	}

	que push(int value) {
		cur = new list;
		cur->data = value;
		cur->next = NULL;
		size++;
		if (first == NULL) {
			first = cur;
			last = cur;
		}
		else {
			last->next = cur;
			cur->prev = last;
			last = cur;
		}
	}

	que pop() {
		cur = first;
		first = first->next; //смещение указателя
		first->prev = NULL;
		delete cur;
		if (first == NULL) {
			last = NULL;
		}
		size--;
	}

	que print() {
		int p;
		if (emptys == true) {
			cout << "Empty!\n";
		}
		cur = first;
		while (cur != NULL) {
			p = cur->data;
			cout << cur->data;
			cur = cur->next;
		}
	}
};
int main() {
	que q;
	int a, n;
	int emp = 0;
	cin >> n;
	q.init();
	for (int i = 0; i < n; i++) {
		printf("Enter the number: ");
		cin >> a;
		q.push(a);
	}
	cout << "Length is: ";
	cout << q.size << "\n";
	cout << "Queue is: ";
	q.print();
	cout << "\n";
	while (q.first != NULL) {
		q.pop();
	}
	if (q.size == 0) {
		cout << "Queue is empty";
	}
	return 0;
}
