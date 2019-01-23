#include <iostream>
#include "lib/cycle_vector_ocheredi_library.h"


using namespace std;

int main() {
	cyc_vector ochered;
	int elem;
	int call = -1;
	int num;
	while (call != 3) {
		cout << "input 1 if you want to push element in ochered\n"
			"input 2 if you want to pop element from ochered\n"
			"input 3 if you want to close ochered\n"
			"input 4 if you want to see your ochered\n"
			"input 5 if you want to init ochered\n";
		cin >> call;
		switch (call) {
		case 1:
			cout << " Input element that you want to add to stack\n";
			cin >> elem;
			ochered.push(elem);

			break;
		case 2:
			ochered.pop();
			break;
		case 4:
			ochered.print();

			break;
		case 5:
			cout << " Input num of ochered\n";
			cin >> num;
			ochered(num);
			ochered.fill;

			break;
		default:
			cout << "why do you do this";
		}
	}
	retun 0;
}
