#include <iostream>
#include "src/t_4.h"
#include <gtest/gtest.h>

using namespace std;

TEST(StackTest,size_test) {
    EXPECT_THROW(Stack st(1001), const char*);
}


TEST(StackTest, print_test) {
    Stack st(2);
    st.Push(5);
    st.Push(22);
    EXPECT_STREQ(st.print(),"5 22");
}

TEST(StackTest, is_empty) {
    Stack st(2);
    EXPECT_TRUE(st.Is_empty());
    st.Push(1);
    EXPECT_FALSE(st.Is_empty());
}

TEST(StackTest, is_full) {
    Stack st(2);
    st.Push(5);
    st.Push(22);
    EXPECT_TRUE(st.Is_full());
    st.Pop();
    EXPECT_FALSE(st.Is_full());
}

TEST(StackTest, length_test) {
    Stack st(2);
    EXPECT_EQ(0, st.length());
    st.Push(1);
    EXPECT_EQ(1, st.length());
    st.Push(1);
    EXPECT_EQ(2, st.length());
    st.Pop();
    EXPECT_EQ(1, st.length());
    st.Pop();
    EXPECT_EQ(0, st.length());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}