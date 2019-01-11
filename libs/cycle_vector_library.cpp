#include "cycle_vector_library.h"
#include <iostream>

using namespace std;

cyc_vector::cyc_vector(int var)
{
    vector_size = var;
    vector = (int*)calloc(vector_size ,sizeof(int*));
};

cyc_vector::~cyc_vector()
{
    free(vector);
    vector = 0;
};

void cyc_vector::set(int element,int index)
{
    vector[index % vector_size] = element;
};

void cyc_vector::get(int index)
{
    cout << vector[index % vector_size] << endl;
};

void cyc_vector::print()
{
    for(int i = 0; i<vector_size; i++){
        cout << vector[i] << " ";
    }
    cout << endl;
};

void cyc_vector::length()
{
    cout << vector_size << endl;
};

void cyc_vector::del(int index)
{
    if (vector_size > 1) {              // !!!!!
        index = index % vector_size;
        for (int i = index - 1; i < vector_size; i++)
            vector[i] = vector[i + 1];
        vector_size--;
        vector = (int *) realloc(vector, sizeof(int *) * vector_size);
    }else(free(vector));
};

void cyc_vector::insert(int element, int index)
{
    index = index % vector_size;
    vector_size++;
    vector = (int*)realloc(vector,sizeof(int*)*vector_size);
    for (int i = vector_size; i>=index; i--)
        vector[i] = vector[i-1];
    vector[index-1] = element;
};

void cyc_vector::fill()
{
    for (int i = 0; i<vector_size; i++)
    {
        vector[i] = i;
    }
};