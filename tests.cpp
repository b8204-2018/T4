#include <iostream>
#include "lib/cycle_vector_ocheredi_library.h"
#include <gtest/gtest.h>

TEST(CreateFunctionTest, wrong_size_test){
    ASSERT_THROW(cyc_vector example(0),const char*);
}

TEST(PushFunctionTest,AllTests){
    cyc_vector example(10);//������� ������ ����������� 10
    int testing_num = 99;
    example.push(testing_num);
	int testing_num1 = 11;
    ASSERT_EQ(testing_num,example.vector[11]);
	ASSERT_EQ(example.length(), testing_num);//���������� ������ ���� 11
	ASSERT_STREQ(example.print(), "0 1 2 3 4 5 6 7 8 9 99 ");//������ ������� ����� ���������
}

TEST(PopFunctionTest, AllTests){
    cyc_vector example(0);
    ASSERT_THROW(example.pop(), const char*);//��������� ���������� 
	cyc_vector example(10);//������� ������ ������������ 10
	example.fill();//��������� ������
    example.pop();//�������� ������� �� �������
	int testing_num = 9;
    ASSERT_EQ(example.length(),testing_num);//���������� ������ ���� 9
	ASSERT_STREQ(example.print(), "1 2 3 4 5 6 7 8 9 ");//������ ������� ����� ���������
}

TEST(PrintFunctionTest,AllTests){
    cyc_vector example(10);
    example.fill();
    ASSERT_STREQ(example.print(),"0 1 2 3 4 5 6 7 8 9 ");
}

TEST(LengthFunctionTest, Equality){
    int testing_num(60);
    cyc_vector example(testing_num);//������ ����������� 60
    ASSERT_EQ(testing_num,example.length());
    ASSERT_EQ(testing_num,example.vector_size);
}