#include <iostream>
#include "src/t_4.h"

using namespace std;

int main() {

    Stack st(6);

    for (int i(0); !st.Is_full(); i++) {
       st.Push(i+1);
    }

    char *b = new char[st.length() * 2];
    memcpy(b, st.print(), st.length() * 2);
    cout << b;
    delete b;

    for (int i(0); !st.Is_empty(); i++) {
        cout << st.Pop() << endl;
    }

    cout <<"\nlength= " << st.length();

    return 0;
}