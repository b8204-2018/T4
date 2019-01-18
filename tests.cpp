#include "queue.h"
#include "gtest/gtest.h"
#include <iostream>

/*TEST(Length, emptyList) {
    queue *first(nullptr);
    EXPECT_EQ(length(first), 0);
}

TEST(Length, notEmptyList) {
    queue *first(nullptr);
    push(first, 1);
    EXPECT_EQ(length(first), 1);
    push(first, 2);
    EXPECT_EQ(length(first), 2);
    int x = pop(first);
    EXPECT_EQ(length(first), 1);
}

TEST(Push, PushLessThanMax) {
    queue *first(nullptr);
    for (int i = 1; i <= 5; i++){
        push(first, i);
    }
    EXPECT_EQ(length(first), 5);
}*/

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}