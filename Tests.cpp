//
// Created by 1 on 12.01.2019.
//

#include <iostream>
#include "src/t_4.h"
#include <gtest/gtest.h>

using namespace std;

TEST(StackTest, bad_size_test) {
ASSERT_THROW(Stack st(1001), const char*);
}


TEST(StackTest, is_empty_test) {
Stack st(1);
ASSERT_THROW(st.Pop(), const char*);
}

TEST(StackTest, print_test) {
    Stack st(2);
    st.Push(1);
    st.Push(2);
    ASSERT_STREQ(st.print(),"1 2 3 ");
}

TEST(StackTest,Is_empty) {
    Stack st(2);
    ASSERT_TRUE(st.Is_empty());
    st.Push(1);
    ASSERT_FALSE(st.Is_empty());
}

TEST(StackTest,Is_full) {
    Stack st(2);
    st.Push(1);
    st.Push(2);
    ASSERT_TRUE(st.Is_full());
    st.Pop();
    ASSERT_FALSE(st.Is_full());
}

TEST(StackTest, length_test) {
    Stack st(2);
    ASSERT_EQ(0, st.length());
    st.Push(1);
    ASSERT_EQ(1, st.length());
    st.Push(1);
    ASSERT_EQ(2, st.length());
    st.Pop();
    ASSERT_EQ(1, st.length());
    st.Pop();
    ASSERT_EQ(0, st.length());
}