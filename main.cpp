#include <vector>
#include <iostream>
#include <malloc.h>
using namespace std;

void print(const int *arr, const int leng) {
    cout << "Vector: ";
    for (int i = 0; i < leng; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void push_right ( int *&arr, int &leng, const int element_right ) {
    leng++;
    int *new_arr = new int[leng];
    for (int i = 0; i < leng - 1; i++) {
        new_arr[i] = arr[i];
    }
    new_arr[leng - 1] = element_right;
    delete[] arr;
    arr = new_arr;
}

void push_left ( int *&arr, int &leng, const int element_left) {
    leng++;
    int *new_arr = new int[leng];
    for (int i = 1; i < leng; i++) {
        new_arr[i] = arr[i - 1];
    }
    new_arr[0] = element_left;
    delete[] arr;
    arr = new_arr;
}

void pop_right( int *&arr, int &leng ) {
    leng--;
    int *new_arr = new int[leng];
    for (int i = 0; i < leng; i++) {
        new_arr[i] = arr[i];
    }
    delete[] arr;
    arr = new_arr;
}

void pop_left ( int *&arr, int &leng) {
    leng--;
    int *new_arr = new int[leng];
    for (int i = 0; i < leng; i++) {
        new_arr[i] = arr[i + 1];
    }
    delete[] arr;
    arr = new_arr;
}

int main()
{
    int *arr = new int[4] { 1, 2, 3, 4 };
    int leng(4);
    int element_right(25), element_left(18);

    char choice('-1');
    print(arr, leng);
    while (choice != '0') {
    cout << "Press 1 if you want to push element at the end\n"
            "Press 2 if you want to push element at the begining\n"
            "Press 3 if you want to pop element from the end \n"
            "Press 4 if you want to pop element from the begining\n"
            "Press 0 if you want to exit\n";
    cin >> choice;
        switch (choice) {
            case '1':
                push_right(arr, leng, element_right);
                print(arr, leng);
                break;
            case '2':
                push_left(arr, leng, element_left);
                print(arr, leng);
                break;
            case '3':
                pop_right(arr, leng);
                print(arr, leng);
                break;
            case '4':
                pop_left(arr, leng);
                print(arr, leng);
                break;
        }
    }
    return 0;
}