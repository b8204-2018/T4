#include <iostream>
#include "deque.h"
#include "string.h"

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
        char *buf = new char[a.length() * 2];
        memcpy(buf, a.print(), a.length() * 2);
        cout << buf;
        delete buf;
        cout << "\nДлина=" << a.length() << endl;
        cout << "Pop=" << a.left_pop() << endl;
        cout << "Pop=" << a.right_pop() << endl;
        cout << "Pop=" << a.right_pop() << endl;
        cout << "Pop=" << a.right_pop() << endl;
        buf = new char[a.length() * 2];
        memcpy(buf, a.print(), a.length() * 2);
        cout << buf;
        cout << "\nДлина=" << a.length();
    }
    catch (const char *error) {
        cout << error << endl;
    }
    return 0;
}
