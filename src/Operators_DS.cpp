#include <iostream>
#include "Lib_DS.h"

using namespace std;

//class double-ended-queue
deque::deque(int n) {
    if (n > 1) {
        size = n;
        vector = new int[n];
        empty = true;
        left = 0;
        right = 0;
        count = 0;
    } else { return; }// "Нельзя создать дэк такого размера!" //cap
}

void deque::left_push(int element) {
    if (empty == true) {
        empty = false;
        vector[left] = element;
        count++;
    } else {
        left--;
        if (((size + left) % size) == ((size + right) % size)) {//Дэк полон
            left++;
            return;//cap
        } else {
            vector[(size + left) % size] = element;
            count++;
        }
    }
}

void deque::right_push(int element) {
    if (empty == true) {
        empty = false;
        vector[right] = element;
        count++;
    } else {
        right++;
        if (((size + left) % size) == ((size + right) % size)) {//Дэк полон
            right--;
            return;//cap
        } else {
            vector[(size + right) % size] = element;
            count++;
        }
    }
}

int deque::left_pop() {
    int result;
    if (count == 0) { empty = true; }//cap
    if (!empty) {
        count--;
        result = vector[(size + left) % size];
        left++;
        return result;
    }
}

int deque::right_pop() {
    int result;
    if (count == 0) { empty = true; }//cap
    if (!empty) {
        count--;
        result = vector[(size + right) % size];
        right--;
        return result;
    }
}

void deque::print() {
    if (!empty) {
        for (int i = left; i <= right; i++) {
            cout << vector[(size + i) % size] << " ";
        }
    }
}

int deque::length() {
    return count;
}

