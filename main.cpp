#include <iostream>
#include "src/Lib_DS.h"

using namespace std;


int main() {
    int size = 0;
    cout << "Введите размер дэка" << endl;
    cin >> size;
    try {
        deque a(size);
        for (int i = 0; i < size / 2; i++) {
            a.left_push(i);
            a.right_push(i);
        }
        a.print();
        cout << "\nДлина=" << a.length() << endl;
        cout << "Pop=" << a.left_pop() << endl;
        cout << "Pop=" << a.right_pop() << endl;
        cout << "Pop=" << a.right_pop() << endl;
        cout << "Pop=" << a.right_pop() << endl;
        a.print();
        cout << "\nДлина=" << a.length();
    }
    catch (const char *error) {
        cout << error << endl;
    }
    return 0;
}