#include <iostream>
#include "TVector.h"
#include "gtest/gtest.h"
using namespace std;

int main()
{
    Tvector A;
    int element(1);
    int index(3);
    A.length = 5;
    try {
        if (A.length > 0) {
            create(A);
            print(A);
            char choice('-1');
            while (choice != '0') {
                cout << "Press 1 if you want to push element without any changes\n"
                        "Press 2 if you want to delete element\n"
                        "Press 3 if you want to get element from the index \n"
                        "Press 4 if you want to set element\n"
                        "Press 0 if you want to exit\n";
                cin >> choice;
                switch (choice) {
                    case '1':
                        cout << "Enter the element you want to push";
                        cin >> element;
                        cout << "Enter the index of element";
                        cin >> index;
                        insert(A,element,index);
                        print(A);
                        //break;
                    case '2':
                        cout << "Enter the index of element you want to delete";
                        cin >> index;
                        deletE(A, index);
                        print(A);
                        //break;
                    case '3':
                        get(A, index);
                        print(A);
                        //break;
                    case '4':
                        set(A, element, index);
                        print(A);
                        //break;
                }
            }

        } else throw -1;
    }
    catch (int a) {
        cout << "Invalid size of array\n";
    }
    return 0;
}