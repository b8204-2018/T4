//
// Created by 1 on 10.01.2019.
//
#include <iostream>
#include "t_4.h"

using namespace std;

        Stack::Stack(int number)
        {
            Max=1000;
            index = 0;

            if (number <= Max){
                arr = new int[number];
                Max = number;
                count = 0;
            } else cout << "Переполнение стека!";
        }

        bool Stack::Push(int n)
        {
            if (index == Max)
                return false;//если не положили ничего в стек
            else {
                arr[index] = n;// помещаем элемент в массив
                index++;
                count++;
                return true;
            }
        }


        int Stack::Pop()//выталкивает элемент
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

        bool Stack::Is_full()//проверка на переполнение стека
        {
            if(index == Max)
                return true;
            else return false;
        }




        void Stack::print()
        {
            if (!Is_empty()){
                for (int i = 0;  i < Max; i++)
                {
                    cout <<  arr[i] << " ";
                }
                cout<< endl;
            }
        }


        int Stack::length()
        {
            return count;
        }
