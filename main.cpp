#include <iostream>
#include "src/t_4.h"

using namespace std;

int main() {

    Stack st(6);

    for (int i(0); !st.Is_full(); i++) {
       st.Push(i+1);
    }

    st.print();

    for (int i(0); !st.Is_empty(); i++) {
        cout << st.Pop() << endl;
    }

    cout <<"\nlength= " << st.length();

    return 0;
}