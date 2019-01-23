#include "cycle_vector_ocheredi_library.h"
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
        vector = (int *) calloc(vector_size, sizeof(int *));//выделение необходимой памяти размера sizeof( int *) *vectorsize 
    } else {throw WRONG_SIZE};
};

cyc_vector::~cyc_vector()//освоюождение памяти 
{
    free(vector);
    vector = 0;
    vector_size = 0;
};

void cyc_vector::push(int element) {
	vector_size++;
	vector = (int *)realloc(vector, sizeof(int *) * vector_size);//выделили новую память 
	/*for (int i = 0; i < vector_size-1; i++)
		vector[i] = vector[i];*/
	vector[vector_size] = element;
};

void cyc_vector::pop() {
	if (vector_size < 1) { throw ZERO_CELLS_NUMBER }
	else {
		if (vector_size > 0) {
			for (int i = 0; i < vector_size; i++)
				vector[i] = vector[i + 1];
			vector_size--;
			vector = (int *)realloc(vector, sizeof(int *) * vector_size);//перераспределение памяти 
		}
	};
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



void cyc_vector::fill()
{
    for (int i = 0; i<vector_size; i++)
    {
        vector[i] = i;
    }
};