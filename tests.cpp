#include "gtest/gtest.h"
#include "slist.h"

TEST(Length, emptyList) {
    List *head(nullptr);
    EXPECT_EQ(length(head), 0);
}

TEST(Length, notEmptyList) {
    List *head(nullptr);
    push(head, 1);
    EXPECT_EQ(length(head), 1);
    push (head, 2);
    EXPECT_EQ(length(head), 2);
    int x = pop(head);
    EXPECT_EQ(length(head), 1);

}

TEST(Push, PushLessThanMax) {
    List *head(nullptr);
    for (int i = 1; i <= 19; i++){
        push(head, i);
    }
    EXPECT_EQ(length(head), 19);
}

TEST(Push, PushMax) {
    List *head(nullptr);
    for (int i = 1; i <= 20; i++){
        push(head, i);
    }
    EXPECT_THROW(push(head, 2), std::length_error);
}

TEST(Pop, Pop) {
    List *head(nullptr);
    int i;
    for (i = 1; i <= 5; i++){
        push(head, i);
    }
    int x = pop(head);
    EXPECT_EQ(x, 5);
}

TEST(Pop, nothingToPop) {
    List *head(nullptr);
    EXPECT_THROW(pop(head), std::length_error);
}



int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}