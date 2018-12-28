#include <iostream>

// циклический вектор можно реализовать через обращение к нему как
//  vect[ (i % razmer) - 1 ] (мб потребуется -1 или +1 )
// [0] [1] [2] [3]      [4] [5] [6] [7] [8] [9] [10] [11] [12]
// razmer = 4;          5 % 4 = 1

using namespace std;

struct cycle_vector
{
    int vector_size;
    int *vector;
public:
    cycle_vector(int var) : vector_size(var)
    {
        vector = new int[vector_size];
    }

    ~cycle_vector()
    {
        delete[] vector;
        vector = 0;
    }

    void set(int element,int index)
    {
        vector[index % vector_size] = element;
    }

    void get(int index){
        cout << vector[index % vector_size] << endl;
    }

    void print()
    {
        for(int i = 0; i<vector_size; i++){
            cout << vector[i] << " ";
        }
        cout << endl;
    }

    void length()
    {
        cout << vector_size << endl;
    }

    void del(int index)
    {
        index = index % vector_size;
        int *arr = new int[vector_size - 1];
        for (int i =0; i<index; i++)
            arr[i] = vector[i];
        for (int i = index; i < vector_size -1; i++ )
            arr[i] = vector[i+1];
        vector = arr;
        delete[] arr;
        vector_size--;
    }

    void insert(int element, int index)
    {
        index = index % vector_size;
        vector_size++;
        vector[vector_size-1] = vector[vector_size-2];
        for (int i=vector_size; i>index;i--)
        {
            vector[i] = vector[i-1];
        }
        vector[index] = element;
    }

    void fill()
    {
        for (int i = 0; i<vector_size; i++)
        {
            vector[i] = i;
        }
    }

};

int main() {
    cycle_vector test(15);
    int element, index;
    test.fill();
    test.print();
    test.insert(99,5);
    test.insert(99,6);
    test.insert(99,7);
    test.print();
    cout << test.vector_size;
    return 0;
}