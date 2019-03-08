//
// Created by igor on 23.01.19.
//
#include "gtest/gtest.h"
#include <iostream>
#include "src/queue2linklist.h"

queue *list=new queue;

TEST(Length, emptyList){
    init(list);
    EXPECT_EQ(length(list),0);
}

TEST(Length, notEmptyList) {
    push(list, 1);
    EXPECT_EQ(length(list), 1);
    push(list, 2);
    EXPECT_EQ(length(list), 2);
    pop(list);
    EXPECT_EQ(length(list), 1);
}

TEST(Pop, Pop_element){
    EXPECT_EQ(length(list), 1);
    pop(list);
    EXPECT_EQ(length(list), 0);
}

TEST(Pop, nothingToPop){
    EXPECT_THROW(pop(list),std::length_error);
}

