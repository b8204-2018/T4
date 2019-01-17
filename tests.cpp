#include "vector.h"
#include "gtest/gtest.h"

TEST( Test, push_left) {
    Tvector  A;
    int element(18);
    create(A);
    push_left(A, element);
    EXPECT_EQ(A.arr[0], element);
}

TEST( Test, push_right) {
    Tvector  A;
    int element(18);
    create(A);
    push_right(A, element);
    EXPECT_EQ(A.arr[A.leng - 1], element);
}

TEST( Test, pop_right) {
    Tvector  A;
    create(A);
    int x = A.arr[A.leng - 2];
    pop_right(A);
    EXPECT_EQ(x, A.arr[A.leng - 1]);
}

TEST( Test, pop_left) {
    Tvector  A;
    create(A);
    int x = A.arr[1];
    pop_right(A);
    EXPECT_EQ(x, A.arr[0]);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}