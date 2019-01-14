#include <iostream>
#include "libs/cycle_vector_library.h"
#include <gtest/gtest.h>

TEST(CreateFunctionTest, wrong_size_test){
    ASSERT_THROW(cyc_vector example(0),const char*);
}

TEST(SetFunctionTest,AllTests){
    cyc_vector example(10);
    ASSERT_THROW(example.set(99,-1), const char*);
    int testing_num = 99;
    example.set(testing_num,5);
    ASSERT_EQ(testing_num,example.vector[5]);
}

TEST(GetFunctionTest, AllTests){
    cyc_vector example(10);
    ASSERT_THROW(example.get(-1), const char*);
    int testing_num(99);
    example.set(testing_num,5);
    ASSERT_EQ(example.get(5),testing_num);
}

TEST(PrintFunctionTest,AllTests){
    cyc_vector example(10);
    example.fill();
    ASSERT_STREQ(example.print(),"0 1 2 3 4 5 6 7 8 9 ");
}

TEST(LengthFunctionTest, Equality){
    int testing_num(60);
    cyc_vector example(testing_num);
    ASSERT_EQ(testing_num,example.length());
    ASSERT_EQ(testing_num,example.vector_size);
}

TEST(DeleteFunctionTest, AllTests){
    cyc_vector example(4);
    example.fill();
    example.del(1); // delete middle pos
    ASSERT_EQ(example.vector_size,3);
    ASSERT_STREQ(example.print(),"0 2 3 ");
    example.del(0); // delete first pos
    ASSERT_EQ(example.vector_size,2);
    ASSERT_STREQ(example.print(),"2 3 ");
    example.del(1); // delete last pos
    ASSERT_EQ(example.vector_size,1);
    ASSERT_STREQ(example.print(),"2 ");
    ASSERT_THROW(example.del(6),const char*);
}

TEST(InsertFunctionTest,AllTest) {
    cyc_vector example(5); // 0
    example.insert(99, 0); // add first pos
    ASSERT_EQ(example.vector_size, 6);
    ASSERT_STREQ(example.print(), "99 0 0 0 0 0 ");
    example.insert(99, 3); // add middle pos
    ASSERT_EQ(example.vector_size, 7);
    ASSERT_STREQ(example.print(), "99 0 0 99 0 0 0 ");
    example.insert(99, 6); // add last pos
    ASSERT_EQ(example.vector_size, 8);
    ASSERT_STREQ(example.print(), "99 0 0 99 0 0 99 0 ");
}