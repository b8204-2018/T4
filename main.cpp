#include <iostream>
#include "vector.h"
#include "gtest/gtest.h"
using namespace std;

int main()
{
    Tvector A;
    int element(0);
    A.leng = 5;
    try {
        if (A.leng > 0) {
            create(A);
            print(A);
            char choice('-1');
            while (choice != '0') {
                cout << "Press 1 if you want to push element at the end\n"
                        "Press 2 if you want to push element at the begining\n"
                        "Press 3 if you want to pop element from the end \n"
                        "Press 4 if you want to pop element from the begining\n"
                        "Press 0 if you want to exit\n";
                cin >> choice;
                switch (choice) {
                    case '1':
                        cout << "Enter the element you want to push";
                        cin >> element;
                        push_right(A, element);
                        print(A);
                        break;
                    case '2':
                        cout << "Enter the element you want to push";
                        cin >> element;
                        push_left(A, element);
                        print(A);
                        break;
                    case '3':
                        pop_right(A);
                        print(A);
                        break;
                    case '4':
                        pop_left(A);
                        print(A);
                        break;
                }
            }

        } else throw -1;
    }
    catch (int a) {
        cout << "Invalid size of array\n";
    }
    return 0;
}