#include "gtest/gtest.h"
#include "src/tlist.h"


TEST(Insert, Create) {
    List *head(nullptr);
    insert(head, 1, 1);
    EXPECT_EQ(length(head), 1);
    EXPECT_EQ(head->value, 1);
}

TEST(Insert, Middle) {
    List *head(nullptr);
    for (int i = 1; i <= 5; i++){
        insert(head, i, 1);
    }
    insert(head, 50, 2);
    EXPECT_EQ(length(head), 6);
        head = head->next;
    EXPECT_EQ(head->value, 50);
}

TEST(Insert, Exceptions) {
    List *head(nullptr);
    for (int i = 1; i <= 5; i++){
        insert(head, i, 1);
    }
    EXPECT_THROW(insert(head, 0, 0), std::invalid_argument);
    EXPECT_THROW(insert(head, 0, 27), std::invalid_argument);
    for (int i = 6; i <= 20; i++){
        insert(head, i, 1);
    }
    EXPECT_THROW(insert(head, 0, 2), std::length_error);
}


TEST(SetGet, First) {
    List *head(nullptr);
    for (int i = 1; i <= 5; i++){
        insert(head, i, 1);
    }
    set(head, 30, 1);
    EXPECT_EQ(head->value, 30);
    EXPECT_EQ(get(head, 1), 30);
}

TEST(SetGet, Middle) {
    List *head(nullptr);
    for (int i = 1; i <= 5; i++){
        insert(head, i, 1);
    }
    set(head, 30, 2);
    EXPECT_EQ(get(head, 2), 30);
        head = head->next;
    EXPECT_EQ(head->value, 30);
}

TEST(SetGet, Last) {
    List *head(nullptr);
    for (int i = 1; i <= 5; i++){
        insert(head, i, 1);
    }
    set(head, 30, 5);
    EXPECT_EQ(get(head, 5), 30);
    for (int i = 1; i < 5; i++){
        head = head->next;
    }
    EXPECT_EQ(head->value, 30);
}


TEST(Delete, First) {
    List *head(nullptr);
    for (int i = 5; i >= 1; i--){
        insert(head, i, 1);
    }
    deleteL(head, 1);
    EXPECT_EQ(length(head), 4);
    EXPECT_EQ(get(head, 1), 2);
}

TEST(Delete, Middle) {
    List *head(nullptr);
    for (int i = 5; i >= 1; i--){
        insert(head, i, 1);
    }
    deleteL(head, 2);
    EXPECT_EQ(length(head), 4);
    EXPECT_EQ(get(head, 1), 1);
    EXPECT_EQ(get(head, 2), 3);
}

TEST(Delete, Last) {
    List *head(nullptr);
    for (int i = 5; i >= 1; i--){
        insert(head, i, 1);
    }
    deleteL(head, 5);
    EXPECT_EQ(length(head), 4);
    EXPECT_EQ(get(head, 4), 4);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}