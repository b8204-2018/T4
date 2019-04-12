#include "src/struct.h"
#include "gtest/gtest.h"

TEST ( Test, Push){
    List* MyList = new List;
    MyList->Head = nullptr;
    int Elem(5);
    EXPECT_EQ(Elem, Push(Elem, MyList));
};

TEST ( Test, Pop) {
    List *MyList = new List;
    MyList->Head = nullptr;
    for (int i = 1; i <= 5; i++) {
        Push(i, MyList); }
    EXPECT_EQ(0, Pop(MyList));
};

TEST ( Test, DelElement){
    List* MyList = new List;
    MyList->Head = nullptr;
    int elem1(1);
    int elem2(2);
    Push(elem1, MyList);
    Push(elem2, MyList);
    EXPECT_EQ(elem1, DelElement(MyList));
};
