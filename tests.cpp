#include <iostream>
#include "deque.h"
#include <gtest/gtest.h>

using namespace std;

TEST(dequeTest, bad_size_test) {
    ASSERT_THROW(deque mydeq(1), const char*);
}

TEST(dequeTest, is_full_test) {
    deque mydeque(2);
    mydeque.left_push(2);
    mydeque.right_push(2);
    ASSERT_THROW(mydeque.right_push(2), const char*);
    ASSERT_THROW(mydeque.left_push(2), const char*);
}

TEST(dequeTest, is_empty_test) {
    deque mydeque(2);
    ASSERT_THROW(mydeque.right_pop(), const char*);
    ASSERT_THROW(mydeque.left_pop(), const char*);
}

TEST(dequeTest, length_test) {
    deque mydeque(2);
    ASSERT_EQ(mydeque.length(), 0);
    mydeque.right_push(1);
    ASSERT_EQ(mydeque.length(), 1);
    mydeque.left_push(1);
    ASSERT_EQ(mydeque.length(), 2);
    mydeque.right_pop();
    ASSERT_EQ(mydeque.length(), 1);
    mydeque.left_pop();
    ASSERT_EQ(mydeque.length(), 0);
}

TEST(dequeTest, print_test) {
    deque mydeque(3);
    mydeque.right_push(1);
    mydeque.right_push(2);
    mydeque.right_push(3);
    ASSERT_STREQ(mydeque.print(), "1 2 3 ");
}
