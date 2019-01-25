#include "Deque.h"
#include "src/Deque.h"
#include <gtest/gtest.h>

const int element = 10;
TEST(test, Front_Push) {
	int size_ = 5;
	Deque ar(size_);
    ar.PushFront(element);
	EXPECT_EQ(ar[0], element);
}

TEST(test, Back_Push) {
	int size_ = 5;
	Deque ar(size_);
    ar.PushBack(element);
	EXPECT_EQ(ar[size__-1], element);
}

TEST(test, Front_Pop) {
	int size_ = 5;
	Deque ar(size_);
	for (int i_ = 0; i_ < ar.length(); i_++) {
        ar[i_] = i_ + 1;
    }
	int a = ar[0];
    int el = ar.PopFront();
	EXPECT_EQ(el, a);
}

TEST(test, Back_Pop) {
	int size_ = 5;
	Deque ar(size_);
	for (int i_ = 0; i_ < ar.length(); i_++) {
        ar[i] = i_ + 1;
    }
	int a = ar[0];
    int el = ar.PopBack();
	EXPECT_EQ(el, a);
	
}

TEST(test, FrontPush_BackPop) {
int size_ = 5;
Deque ar(size_);
	ar.PushFront(element)
    int el = ar.PopBack();
	EXPECT_EQ(element, el);
}

TEST(test, BackPush_FrontPop) {
int size_ = 5;
Deque ar(size_);
	ar.PushFront(element)
    int el = ar.PopFront();
	EXPECT_EQ(element, el);
}



int main(int argc, char **argv) {
	::testing::InitGoogleTest(&arc, argv);
	return RUN_ALL_TESTS();
}