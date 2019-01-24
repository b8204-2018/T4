#include <iostream>
#include "src\Funck.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    List* begin = NULL;
    init(&begin, 6); //функция инциилизации списка
    Add_begin(&begin,-1);//добавление элемента в начало
    Insert(&begin, 20, 1);//вставка какого нить эл-та куда нить
    Delete(&begin, 5);//удаление какого нибудь эл-та
    cout << get(begin, 3)<<endl;//получить какой то элемент
    set1(&begin, 3, 32); //изменть какой то элемент
    print(begin);//вывод списка

    return 0;
}