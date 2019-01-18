//
// Created by Настя on 19.01.2019.
//

#ifndef T4_MY_TVECTOR_H
#define T4_MY_TVECTOR_H
struct Tvector{
    int length = 0;
    int *arr;
};
void create(TVector &A);
void print(TVector A);
void insert(TVector &A, int element, int index);
void deletE(TVector &A, int index);
int get(TVector A, int index);
void set(TVector &A, int element, int index);
int length (TVector A);
#endif //T4_MY_TVECTOR_H
