#include <iostream>
#include "struct.h"

using namespace std;


int Push(int x, List *&MyList){
    List *temp = new List;
    temp->x = x;
    temp->Next = MyList->Head;
    MyList->Head = temp;
    return MyList->Head->x;
};

void Print(List *MyList){
    List *temp = MyList->Head;
    while (temp != nullptr){
         cout << temp->x << " ";
        temp = temp->Next;
    }
    cout << endl;
};

int Pop(List *MyList) {
    while (MyList->Head != nullptr){
        List *temp = MyList->Head->Next;
        delete MyList->Head;
        MyList->Head = temp;
    }
    if (MyList->Head== nullptr){
        return 0;
    }
};

int  DelElement(List *MyList){
    List *temp = MyList->Head->Next;
    delete MyList->Head;
    MyList->Head = temp;
    return MyList->Head->x;
};

int length (List *MyList) {
    int i = 0;
    List *temp = MyList->Head;
    while (temp != nullptr){
        temp = temp->Next;
        i++;
    }
    cout << i;
    cout << endl;
};
