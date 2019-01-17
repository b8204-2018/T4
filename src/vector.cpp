//
// Created by DELL on 16.01.2019.
//

#include "vector.h"
#include <iostream>
using namespace std;

void create(Tvector  &A) {
    A.arr = new int [A.leng];
    for (int i = 0; i < A.leng; i++) {
        A.arr[i] = i + 1;
    }
}

void print(Tvector  A) {
    cout << "Vector: ";
    for (int i = 0; i < A.leng; i++) {
        cout << A.arr[i] << " ";
    }
    cout << endl;
}

void push_right ( Tvector  &A, const int element ) {
    A.leng++;
    int *new_arr = new int[A.leng];
    for (int i = 0; i < A.leng - 1; i++) {
        new_arr[i] = A.arr[i];
    }
    new_arr[A.leng - 1] = element;
    delete[] A.arr;
    A.arr = new_arr;
}

void push_left ( Tvector  &A, const int element) {
    A.leng++;
    int *new_arr = new int[A.leng];
    for (int i = 1; i < A.leng; i++) {
        new_arr[i] = A.arr[i - 1];
    }
    new_arr[0] = element;
    delete[] A.arr;
    A.arr = new_arr;
}

void pop_right( Tvector  &A ) {
    A.leng--;
    int *new_arr = new int[A.leng];
    for (int i = 0; i < A.leng; i++) {
        new_arr[i] = A.arr[i];
    }
    delete[] A.arr;
    A.arr = new_arr;
}

void pop_left ( Tvector  &A) {
    A.leng--;
    int *new_arr = new int[A.leng];
    for (int i = 0; i < A.leng; i++) {
        new_arr[i] = A.arr[i + 1];
    }
    delete[] A.arr;
    A.arr = new_arr;
}

int length(Tvector  A) {
    return A.leng;
}