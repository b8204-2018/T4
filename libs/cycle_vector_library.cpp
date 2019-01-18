#include "cycle_vector_library.h"
#include <iostream>
#include <cstring>

#define WRONG_SIZE "Incorrect size of vector";
#define WRONG_INDEX "Incorrect index number";
#define ZERO_CELLS_NUMBER "Cannot delete last cell";

using namespace std;

cyc_vector::cyc_vector(int var)
{
    if (var >= 1) {
        vector_size = var;
        vector = (int *) calloc(vector_size, sizeof(int *));
    } else {throw WRONG_SIZE};
};

cyc_vector::~cyc_vector()
{
    free(vector);
    vector = 0;
    vector_size = 0;
};

void cyc_vector::set(int element,int index)
{
    if (index < 0) {
        {throw WRONG_INDEX};
    }else {
        vector[index % vector_size] = element;
    }
};

int cyc_vector::get(int index)
{
    if (index < 0) {
        {throw WRONG_INDEX};
    }else {
        return vector[index % vector_size];
    }
};

char* cyc_vector::print()
{
    string  line("");
    string element;
    for(int i = 0; i<vector_size; i++){
        element = to_string(vector[i]);
        line = line + element + " ";
    }
    cout << line << endl;
    char * result = new char[vector_size*2];
    strcpy(result,line.c_str());
    return result;
};

int cyc_vector::length()
{
    return vector_size;
};

void cyc_vector::del(int index)
{
    if (vector_size < 2) {throw ZERO_CELLS_NUMBER}
    else {
        if (vector_size > 1) {
            if (index != 0){index = index % vector_size;}
            for (int i = index; i < vector_size; i++)
                vector[i] = vector[i + 1];
            vector_size--;
            vector = (int *) realloc(vector, sizeof(int *) * vector_size);
        }
    };
};

void cyc_vector::insert(int element, int index) {
        if (index != 0){index = index % vector_size;}
        vector_size++;
        vector = (int *) realloc(vector, sizeof(int *) * vector_size);
        for (int i = vector_size; i > index; i--)
            vector[i] = vector[i - 1];
        vector[index] = element;
};

void cyc_vector::fill()
{
    for (int i = 0; i<vector_size; i++)
    {
        vector[i] = i;
    }
};