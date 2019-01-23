#ifndef LFIN_CYCLE_VECTOR_LIBRARY_H
#define LFIN_CYCLE_VECTOR_LIBRARY_H


struct cyc_vector
{
    int vector_size;
    int *vector;
    cyc_vector(int var);
    ~cyc_vector();
	void push(int element)
	void pop()
    char* print();
    int length();
    void fill();
};

#endif //LFIN_CYCLE_VECTOR_LIBRARY_H
