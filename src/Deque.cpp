#include <iostream>
#include <stdio.h>
#include "Deque.h"

using namespace std;
//
        Deque::Deque(int number)
        {
                if (number > 1) {
                    d = new int[size];
                    n = 0;
                } else throw "Incorrect size" << endl;
        }


void Deque::PushFront(int element) {
        if (n != size) {
		int *arr1 = new int[++n];
		for (int i = 1; i < length; i++) {
			arr1[i] = d[i-1];
		}
		delete[] d;
		arr1[0] = element;
		memcpy(d, arr1, sizeof(int)*n)
		}
		else
       throw "Overflow";
}

void Deque::PushBack(int element) {
            if (n != size) {
		int *arr1 = new int[++n];
		for (int i = 0; i < (n - 1); i++) {
			arr1[i] = d[i-1];
		}
		delete[] d;
		arr1[n] = element;
		memcpy(d, arr1, sizeof(int)*n)
		}
		else
       throw "Overflow";
}

int Deque::PopFront () {
    int a;
        if (n != 0) {
        int *arr1 = new int[--n];
		for (int i = 1; i < n; i++) {
			arr1[i - 1] = d[i];
		}
		a = d[0];
		delete[] d;
		memcpy(d, arr1, sizeof(int)*n)
		return a;
		}
		else if (n == 0)
            throw "Deque is empty";
 }

int Deque::PopBack() {
    int a;
        if (n != 0) {
        int *arr1 = new int[--n];
		for (int i = 1; i < n; i++) {
			arr1[i - 1] = d[i];
		}
		a = d[n+1];
		delete[] d;
		memcpy(d, arr1, sizeof(int)*n)
		return a;
		}
		else if (n == 0)
            throw "Deque is empty";
 }

}

        void Deque::Print()
        {
            if (length != 0){
                for (int i = 0;  i < length; i++)
                {
                    cout <<  d[i] << ", ";
                }
                cout << endl;
            }
        }


        int Deque::length()
        {
            return n;
        }
