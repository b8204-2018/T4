#include <iostream>
#include "libs/cycle_vector_library.h"

// циклический вектор можно реализовать через обращение к нему как
//  vect[ (i % razmer) - 1 ] (мб потребуется -1 или +1 )
// [0] [1] [2] [3]      [4] [5] [6] [7] [8] [9] [10] [11] [12]
// razmer = 4;          5 % 4 = 1

using namespace std;

int main() {
    cyc_vector test(3);
    test.fill();
    test.print();
    test.del(1);
    test.print();
    test.del(1);
    test.print();
    test.del(1);
    test.print();
    return 0;
}