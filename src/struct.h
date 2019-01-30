#ifndef T4_STRUCT_H
#define T4_STRUCT_H


struct elementSpiska{
    int value;
    elementSpiska *Next;
};

struct spisok{
    elementSpiska *Head;
    elementSpiska *Tail;
    spisok();
    ~spisok();
    void addElemInSpisok(int value);
    void deleteElem();
    void delAllSpisok();
    void printSpisok();
    void randomSpisok(int razmer);
};

#endif //T4_STRUCT_H
