#include <iostream>
using namespace std;

struct vector {
    int leng;
    int *arr = new int[leng];
};

void create(vector &A) {
    for (int i = 0; i <= A.leng; i++) {
        A.arr[i] = i + 1;
    }
}

void print(vector A) {
    cout << "Vector: ";
    for (int i = 0; i < A.leng; i++) {
        cout << A.arr[i] << " ";
    }
    cout << endl;
}

void push_right ( vector &A, const int element ) {
    A.leng++;
    int *new_arr = new int[A.leng];
    for (int i = 0; i < A.leng - 1; i++) {
        new_arr[i] = A.arr[i];
    }
    new_arr[A.leng - 1] = element;
    delete[] A.arr;
    A.arr = new_arr;
}

void push_left ( vector &A, const int element) {
    A.leng++;
    int *new_arr = new int[A.leng];
    for (int i = 1; i < A.leng; i++) {
        new_arr[i] = A.arr[i - 1];
    }
    new_arr[0] = element;
    delete[] A.arr;
    A.arr = new_arr;
}

void pop_right( vector &A ) {
    A.leng--;
    int *new_arr = new int[A.leng];
    for (int i = 0; i < A.leng; i++) {
        new_arr[i] = A.arr[i];
    }
    delete[] A.arr;
    A.arr = new_arr;
}

void pop_left ( vector &A) {
    A.leng--;
    int *new_arr = new int[A.leng];
    for (int i = 0; i < A.leng; i++) {
        new_arr[i] = A.arr[i + 1];
    }
    delete[] A.arr;
    A.arr = new_arr;
}

int length(vector A) {
    return A.leng;
}

int main()
{
    vector A;
    int element(0);
    cout << "Enter the size of array";
    cin >> A.leng;
    try {
        if (A.leng > 0) {
            create(A);
            print(A);
            char choice('-1');
            while (choice != '0') {
                cout << "Press 1 if you want to push element at the end\n"
                        "Press 2 if you want to push element at the begining\n"
                        "Press 3 if you want to pop element from the end \n"
                        "Press 4 if you want to pop element from the begining\n"
                        "Press 0 if you want to exit\n";
                cin >> choice;
                switch (choice) {
                    case '1':
                        cout << "Enter the element you want to push";
                        cin >> element;
                        push_right(A, element);
                        print(A);
                        break;
                    case '2':
                        cout << "Enter the element you want to push";
                        cin >> element;
                        push_left(A, element);
                        print(A);
                        break;
                    case '3':
                        pop_right(A);
                        print(A);
                        break;
                    case '4':
                        pop_left(A);
                        print(A);
                        break;
                }
            }

        } else throw -1;
    }
    catch (int a) {
        cout << "Invalid size of array\n";
    }

    return 0;
}