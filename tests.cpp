#include "queue.h"
#include "gtest/gtest.h"
#include <iostream>

TEST(Length, emptyList) {
    queue *list(nullptr);
    EXPECT_EQ(length(list), 0);
}

TEST(Length, notEmptyList) {
    queue *list(nullptr);
    push(list, 1);
    EXPECT_EQ(length(list), 1);
    push(list, 2);
    EXPECT_EQ(length(list), 2);
    int x = pop(list);
    EXPECT_EQ(length(list), 1);
}

TEST(Push, PushLessThanMax) {
    queue *list(nullptr);
    for (int i = 1; i <= 4; i++){
        push(list, i);
    }
    EXPECT_EQ(length(list), 5);
}

TEST(Push, PushMax) {
    queue *list(nullptr);
    for (int i = 1; i <= 5; i++){
        push(list, i);
    }
    EXPECT_THROW(push(list, 1), std::length_error);
}

TEST(Pop, Pop_element) {
    queue *list(nullptr);
    int i;
    for (i = 1; i <= 5; i++){
        push(list, i);
    }
    int x = pop(list);
    EXPECT_EQ(x, 5);
}

TEST(Pop, nothingToPop) {
    queue *list(nullptr);
    EXPECT_THROW(pop(list), std::length_error);
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}