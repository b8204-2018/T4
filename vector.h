//
// Created by DELL on 17.01.2019.
//

#ifndef T4_ANOTHER_TRY_VECTOR_H
#define T4_ANOTHER_TRY_VECTOR_H

struct Tvector  {
        int leng = 0;
        int *arr ;
};

void create(Tvector  &A);
void print(Tvector  A);
void push_right ( Tvector  &A, const int element );
void push_left ( Tvector  &A, const int element);
void pop_right( Tvector  &A );
void pop_left ( Tvector  &A);
int length(Tvector  A);

#endif //T4_ANOTHER_TRY_VECTOR_H
