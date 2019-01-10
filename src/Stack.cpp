#include <iostream>
#include "Stack.h"

using namespace std;

        Stack::Stack(int number)
        {
            max = 1000;
            index = 0;

            if (number <= max){
                arr = new int[number];
                max = number;
                count = 0;
            } else cout << "Overflow";
        }

        bool Stack::Push(int n)
        {
            if (index == max)
                return false;
            else {
                arr[index] = n;
                index++;
                count++;
                return true;
            }
        }


        int Stack::Pop()
        {
            if (index <= 0)
                return 0;
            else {
                return arr[--index];
            };
        }

        bool Stack::Is_empty()
        {
            if(index <= 0)
                return true;
            else return false;
        }

        bool Stack::Is_full()
        {
            if(index == max)
                return true;
            else return false;
        }




        void Stack::print()
        {
            if (!Is_empty()){
                for (int i = 0;  i < max; i++)
                {
                    cout <<  arr[i] << " ";
                }
                cout << endl;
            }
        }


        int Stack::length()
        {
            return count;
        }
