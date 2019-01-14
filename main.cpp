#include <iostream>
#include "libs/cycle_vector_library.h"


using namespace std;

int main() {
    cyc_vector test(2);
    test.fill();
    test.print();
    test.del(1);
    test.print();
    cout << test.length() << endl;
    test.del(1);
    return 0;
}
