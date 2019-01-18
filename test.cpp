#include "vector.h"
#include "gtest/gtest.h"

TEST( Test,insert) {
Tvector  A;
int element(18);
int index(3)
create(A);
insert(A, element, index);
EXPECT_EQ(A.arr[3], element);
}

TEST( Test, deletE) {
Tvector  A;
int index(3);
create(A);
int x=A.arr[3]
deletE(A, index);
EXPECT_EQ(x, A.arr[4]);
}

TEST( Test, get) {
Tvector  A;
create(A);
int index(3)
int x = A.arr[3];
get(A, index);
EXPECT_EQ(x, A.arr[3]);
}

TEST( Test, pop_left) {
Tvector  A;
create(A);
int index(3);
int element(18);
int x = A.arr[3];
set(A,element,index);
EXPECT_EQ(x, element);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}