#include <iostream>
#include "pch.h"

using namespace std;

class Vector {

	int length = 0;
	int backLength = 0;
	int *vector = new int[8];


public:

	int push(int elem) {
		try
		{

			if (length == 8) {
				throw;
			}
		}
		catch (...) {
			cout << "que is full";
		}

		vector[length] = elem;


		length = length + 1;


		return 0;

	}




	int pop() {

		try {
			if (length == backLength) {
				throw;
			}
		}
		catch (...) {
			cout << "que is empty";
		}

		length = length - 1;


		int elem = vector[length];


		vector[length] = 0;


		return elem;

	}




	int print() {

		if (length == 0) {

			return 0;

		}


		for (int i = 0; i < length; i++) {

			cout << vector[i] << "\n";

		}


		return 0;

	}




	int len() {

		cout << "\n\nДлинна вектора: " << length << "\n";


		return length;

	}

};




int main() {


	Vector vector;


	vector.len();
	vector.print();


	for (int i = 0; i < 10; i++) {

		vector.push(i + 1);

	}


	vector.len();
	vector.print();


	for (int i = 0; i < 5; i++) {

		vector.pop();

	}


	vector.len();
	vector.print();


	for (int i = 0; i < 5; i++) {

		vector.pop();

	}


	vector.len();
	vector.print();


	for (int i = 0; i < 15; i++) {

		vector.push(i + 1);

	}


	vector.len();
	vector.print();


	return 0;

}