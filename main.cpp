#include <iostream>
#include "Deque.h"
//#include "gtest/gtest.h"
using namespace std;

int main() {
    int size = 8;
    Deque ar(size);

    ar.Print();
    int el = 0;



            try {
                if (ar.length() > 0) {
                    char comm = '-1';
                    while (comm != '0') {
                        cout << "1. Добавить элемент в начало" << endl;
                        cout << "2. Добавить элемент в конец" << endl;
                        cout << "3. Получить первый элемент" << endl;
                        cout << "4. Получить последний элемент" << endl;

                        cin >> comm;
                        switch (comm) {
                            case '1':
                                cin >> el;
                                ar.PushFront(el);
                                ar.Print();
                                cout << endl << "Элемент добавлен\n\n";
                                break;
//-----------------------------------------------
                            case '2':
                                cin >> el;
                                ar.PushBack(el);
                                ar.Print();
                                break;
//-----------------------------------------------
                            case '3':
                                ar.PopFront();
                                ar.Print();
                                break;
//-----------------------------------------------
                            case '4':
                                ar.PopBack();
                                ar.Print();
                                break;
                        }
                    }

                } else throw -1;
            }
        catch(int a) {
            cout <<"Invalid size of array" << endl;
        }
    return 0;
}
