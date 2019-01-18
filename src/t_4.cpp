#include <iostream>
#include <string>
#include "t_4.h"

using namespace std;


#define BAD_SIZE "Stack is incorrect size";
#define IS_EMPTY  "Stack is empty";

Stack::Stack(int number) {
    Max = 1000;
    index = 0;

    if (number <= Max) {
        arr = new int[number];
        Max = number;
        count = 0;
    } else { throw BAD_SIZE; }
}

bool Stack::Push(int n) {
    if (index == Max)
        return false;
        else {
            arr[index] = n;// помещаем элемент в массив
            index++;
            count++;
            return true;
            }
}

int Stack::Pop() {
    if (index <= 0)
     {throw IS_EMPTY;}
    else {
        return arr[--index];
    };
}

bool Stack::Is_empty() {
    return (index <= 0);
}

bool Stack::Is_full() {//проверка на переполнение стека
    if(index == Max)
        return (index >= 0);
}

char *Stack::print() {
    string str;
    if (!Is_empty()) {
        for (int i = 0;  i < Max; i++) {
            str= str + to_string(arr[i])+' ';
        }
        cout << str << endl;
        return (char *) str.c_str();
    }
}

int Stack::length() {
    return count;
}
