#include <vector>
#include <iostream>
using namespace std;

int length (const std::vector<int> arr) {
    return arr.size();
}

void print(const std::vector<int> arr) {
    cout << "Vector: ";
    for (int i = 0; i < length(arr); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void push_right ( std::vector<int> &arr, int element_right) {
    arr.resize(length(arr) + 1);
    arr[length(arr) - 1] = element_right;
}

void push_left ( std::vector<int> &arr, int element_left) {
    arr.resize(length(arr) + 1);
    for (int i = length(arr) - 1; i > 0; i--) { arr[i] = arr[i - 1]; }
    arr[0] = element_left;
}

void pop_right( std::vector<int> &arr ) {
    arr.resize(length(arr) - 1);
}

void pop_left ( std::vector<int> &arr) {
    for (int i = 0; i < length(arr); i++) { arr[i] = arr[i + 1]; }
    arr.resize(length(arr) - 1);
}

int main()
{
    std::vector<int> arr { 1, 2, 3, 4 };
    int element_right(18), element_left(25);
    char choice('-1');
    print(arr);
    while (choice != '0') {
    cout << "Press 1 if you want to push element at the end\n"
            "Press 2 if you want to push element at the begining\n"
            "Press 3 if you want to pop element from the end \n"
            "Press 4 if you want to pop element from the begining\n"
            "Press 0 if you want to exit\n";
    cin >> choice;
        switch (choice) {
            case '1':
                push_right(arr, element_right);
                print(arr);
                break;
            case '2':
                push_left(arr, element_left);
                print(arr);
                break;
            case '3':
                pop_right(arr);
                print(arr);
                break;
            case '4':
                pop_left(arr);
                print(arr);
                break;
        }
    }

    return 0;
}