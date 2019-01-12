#include <iostream>
#include <string>
#include <stdio.h>
#include "deque.h"

using namespace std;

#define BAD_SIZE "Deque is incorrect size";
#define IS_FULL  "Deque is full";
#define IS_EMPTY "Deque is empty";

//class double-ended-queue
deque::deque(int n) {
    if (n > 1) {
        size = n;
        vector = new int[n];
        empty = true;
        left = 0;
        right = 0;
        count = 0;
    } else { throw BAD_SIZE; }
}

void deque::left_push(int element) {
    if (empty == true) {
        empty = false;
        vector[left] = element;
        count++;
    } else {
        left--;
        if (((size + left) % size) == ((size + right) % size)) {
            left++;
            throw IS_FULL;
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
        if (((size + left) % size) == ((size + right) % size)) {
            right--;
            throw IS_FULL;
        } else {
            vector[(size + right) % size] = element;
            count++;
        }
    }
}

int deque::left_pop() {
    int result;
    if (count == 0) {
        empty = true;
        throw IS_EMPTY;
    }
    if (!empty) {
        count--;
        result = vector[(size + left) % size];
        left++;
        return result;
    }
}

int deque::right_pop() {
    int result;
    if (count == 0) {
        empty = true;
        throw IS_EMPTY;
    }
    if (!empty) {
        count--;
        result = vector[(size + right) % size];
        right--;
        return result;
    }
}

char *deque::print() {
    if (!empty) {
        std::string str;
        for (int i = left; i <= right; i++) {
            str = str + std::to_string(vector[(size + i) % size]) + " ";
        }
        return (char *) str.c_str();
    }
}

int deque::length() {
    return count;
}

