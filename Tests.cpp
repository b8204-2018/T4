#include "gtest\gtest.h"
#include "Funck.h"

List* begin = NULL;
TEST(Fanck,Size){

    init(&begin, 5); //функция инциилизации списка
    EXPECT_EQ(size(), 5);
    delete begin;
};

TEST(Fanck,add){

    Add_begin(&begin,-1);//добавление элемента в начало
    EXPECT_EQ(size(), 6);
};
TEST(Fanck,insert){

    Insert(&begin, 20, 3);//вставка какого нить эл-та куда нить
    get(begin, 3);//получить какой то элемент
    EXPECT_EQ(get(begin, 3), 20);
};
TEST(Fanck,del){

    Delete(&begin, 2);
    EXPECT_EQ(size(), 5);
};
TEST(Fanck,get){

    EXPECT_EQ(get(begin, 3), 2);
};
