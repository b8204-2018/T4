#include "src/struct.h"
#include "gtest/gtest.h"

TEST ( Test, addElemInSpisok){
    spisok List;
    int Elem(666);
    int razmer(6);
    List.spisok::randomSpisok(razmer);
    List.spisok::addElemInSpisok(Elem);
    EXPECT_EQ(Elem, List.spisok::Head->value);
}

TEST ( Test, addElemInEmptySpisok){
    spisok List;
    int Elem(666);
    List.spisok::addElemInSpisok(Elem);
    EXPECT_EQ(Elem, List.spisok::Head->value);
    EXPECT_EQ(Elem, List.spisok::Tail->value);
}

TEST ( Test, deleteElemInSpisok){
    spisok List;
    int Elem1(12);
    int Elem2(21);
    List.spisok::addElemInSpisok(Elem1);
    List.spisok::addElemInSpisok(Elem2);
    List.spisok::deleteElem();
    EXPECT_EQ(Elem2, List.spisok::Head->value);
    EXPECT_EQ(Elem2, List.spisok::Tail->value);
}

//TEST ( Test, delAllSpisok){

//}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}