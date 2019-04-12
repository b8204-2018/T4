//
// Created by Елена on 12.04.2019.
//

#ifndef TTASK4444_STRUCT_H
#define TTASK4444_STRUCT_H
using namespace std;

struct List {
    int x;
    List *Next;
    List *Head;
};

    int Push(int x, List *&MyList);

    void Print(List *MyList);

    void Pop(List *MyList);

    void DelElement(List *MyList);

    int length(List *MyList);


#endif //TTASK4444_STRUCT_H
