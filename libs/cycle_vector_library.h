#ifndef LFIN_CYCLE_VECTOR_LIBRARY_H
#define LFIN_CYCLE_VECTOR_LIBRARY_H


struct cyc_vector
{
    int vector_size;
    int *vector;
    cyc_vector(int var);
    ~cyc_vector();
    void set(int element,int index);
    int get(int index);
    char* print();
    int length();
    void del(int index);
    void insert(int element, int index);
    void fill();
};

#endif //LFIN_CYCLE_VECTOR_LIBRARY_H
