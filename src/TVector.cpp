#include <cstring>
#include <cstdio>
#include <cstdlib>

#include "vector.h"
#include <iostream>
using namespace std;

void create(Tvector  &A) {
    A.arr = new int [A.length];
    for (int i = 0; i < A.length; i++) {
        A.arr[i] = i + 1;
    }
}

void print(Tvector  A) {
    cout << "Vector A is: ";
    for (int i = 0; i < A.length; i++) {
        cout << A.arr[i] << " ";
    }
    cout << endl;
}

int length(TVector A){
    return A.length;
}

void insert(TVector &A, const int element, const int index){
    A.length++;
    int *new_arr = new int[A.length];
    for (int i=0; i!=index; i++) {
        new_arr[i]=A.arr[i];
    }
    new_arr[index]=element;
    for (i=index+1;i<=A.length;i++ ){
        new_arr[i]=A.arr[i-1];
    }
    delete[] A.arr;
    A.arr=new_arr;
}

void deletE(TVector &A, const int index){
    A.length--;
    int *new_arr=new int[A.length];
    for (int i=0; i!=index; i++){
        new_arr[i]=A.arr[i];
    }
    for (i=index; i<A.length+1; i++){
        new_arr[i]=A.arr[i+1];
    }
    delete[] A.arr;
    A.arr=new_arr;
}

int get(TVector A, int index){
    int j=0;
    j=A.arr[index];
    return j;
}

void set(TVector &A, int element, int index){
    int *new_arr=new int[A.length];
    for (int i=0; i!=index; i++) {
        new_arr[i]=A.arr[i];
    }
    new_arr[index]=element;
    for (i=index+1;i<=A.length;i++ ){
        new_arr[i]=A.arr[i];
    }
    delete[] A.arr;
    A.arr=new_arr;
}
}