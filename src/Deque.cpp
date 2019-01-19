#include <iostream>
#include <stdio.h>
#include "Deque.h"

using namespace std;
//
const int number = 8;
        Deque::Deque(int number)
        {   if (number > 1) {
                size = number;
                d = new int[size];
                start_ = 0;
                end_ = 0;
                n = 0;
            }
            else cout << "Incorrect size";
        }


void Deque::PushFront(int element) {
    if (n == size) {
        cout << "Overflow";
    }
    else if (n == 0) {
        d[start_] = element;
        n++;
    }
    else {
        if (start_ == 0) {
            start_ = size - 1;
            d[start_] = element;
            n++; }
        else {
            start_--;
            d[start_] = element;
            n++; }
    }
}

void Deque::PushBack(int element) {
    if (n == size) {
        cout << "Overflow";
    }
    else if (n == 0) {
        d[end_] = element;
        n++;
    }
    else {
        if (end_ == size - 1) {
            end_ = 0;
            d[end_] = element;
            n++; }
        else {
            end_++;
            d[end_] = element;
            n++;
        }
    }
}

int Deque::PopFront () {
    int a;
    if (n != 0 && (start_ == end_)) {
        a = d[start_];
        n--;
        return a;
    }
    else if (n == 0) {
        cout << "Deque is empty";
        return -1;
    }
    else
    {
        a = d[start_];
        if (start_ == size - 1) {
            start_ = 0; n--;
        }
        else {
            start_++;
            n--;
        }
        return a;
    }
}

int Deque::PopBack() {
    int a;
    if (n != 0 && (start_ == end_)) {
        a = d[end_];
        n--;
        return a; }
    else if (n == 0) {
        cout << "Deque is empty";
        return -1;
    }
    else
    {
        a = d[end_];
        if (end_ == 0) {
            end_ = size - 1;
            n--;
        }
        else {
            end_--;
            n--; }
        return a;
    }
}

        void Deque::Print()
        {
            if (n != 0){
                for (int i = 0;  i < max; i++)
                {
                    cout <<  d[i] << " ";
                }
                cout << endl;
            }
        }


        int Deque::length()
        {
            return n;
        }
