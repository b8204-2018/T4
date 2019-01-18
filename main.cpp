#include <iostream>
#include "gtest/gtest.h"
#include "queue.h"

using namespace std;

int main(int argc, char **argv) {
    queue *q;
    int emp = 0;
    init(q);
    int a = 1;
    for (int i = 0; i < 5; i++) {
        push(q, a);
        print(q);
        a++;
    }
    cout << "Length is: ";
    cout << length(q) << "\n";
    cout << "\n";
    while(q->first != NULL) {
        emp = pop(q);
    }
    if (emp == 0){
        cout << "Queue is empty";
    }

    return 0;
}