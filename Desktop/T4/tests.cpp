//
// Created by maria on 12.04.19.
//

#include "src/struct.h"
#include "gtest/gtest.h"

TEST(Length, empty) {
    List *head(nullptr);
    EXPECT_EQ(length(head), 0);
}


TEST(left_push, Push) {
    List *head(nullptr);
    for (int i = 1; i <= 25; i++){
        left_push(&head, i);
    }
    EXPECT_EQ(length(head), 25);
}



TEST(left_pop, Pop) {
    List *head(nullptr);
    int i;
    for (i = 1; i <= 9; i++){
        left_push(&head, i);
    }
    int x = left_pop(&head);
    EXPECT_EQ(x, 9);
}





int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}