#include <iostream>
#include <cstring>

using namespace std;

struct elementSpiska{
    int value;
    elementSpiska *Next;
};

struct spisok{
    elementSpiska *Head;
    elementSpiska *Tail;

    spisok(){
        Head = Tail = nullptr;
    }

    ~spisok(){
        delAllSpisok();
    }

    void addElemInSpisok(int value){
        elementSpiska *addElem = new elementSpiska;
        addElem->value = value;
        addElem->Next = Head;
        if(Head != nullptr){
            Head = addElem;
        }
        else{
            Head = Tail = addElem;
        }
    }

    void deleteElem() {
        elementSpiska *delElem = Tail;
        elementSpiska *newTail = Head;
        bool found = false;
        if (delElem == newTail){
            delete delElem;
            Head = Tail = nullptr;
        }
        else {
            while (found == false) {
                if (newTail->Next == delElem) {
                    delete delElem;
                    newTail->Next = nullptr;
                    Tail = newTail;
                    found = true;
                }
                newTail = newTail->Next;
            }
        }
    }

    void delAllSpisok(){
        while(Head != nullptr)
            deleteElem();
    }

    void printSpisok(){
        elementSpiska *addElem = Head;
        while(addElem != nullptr){
            cout << addElem->value << " ";
            addElem = addElem->Next;
        }
    }

};

int main(){
    spisok list;
    size_t NumbElem;
    cout << "Enter how many elements in the list :";
    cin >> NumbElem;
    for(int i = 0; i < NumbElem; i++){
        int elem;
        cout << "The value of the item you want to add to the queue: ";
        cin >> elem;
        cout << endl;
        list.addElemInSpisok(elem);
    }
    cout << "Your list: ";
    list.printSpisok();
    cout << endl;
    size_t act = 0;
    while(act != 666){
        act = 0;
        cout << endl;
        cout << "Function menu:" << endl;
        cout << "To add an element to the queue, enter \"1\" and press \"Enter\"." << endl;
        cout << "To delete an element from the queue, enter \"2\" and press \"Enter\"." << endl;
        cout << "To delete the entire queue, enter \"3\" and press \"Enter\"." << endl;
        cout << "To display the queue on the screen, enter \"4\" and press \"Enter\"." << endl;
        cout << "To exit the function menu, enter \"666\" and press \"Enter\"." << endl;
        cout << "Enter the number of the function you wish to perform: " << endl;
        cin >> act;
        if (act == 1){
            cout << "The value of the item you want to add to the queue: ";
            int elem;
            cin >> elem;
            list.addElemInSpisok(elem);
            cout << "Your list: ";
            list.printSpisok();
        }
        if (act == 2){
            list.deleteElem();
            cout << "Your list: ";
            list.printSpisok();
        }
        if (act == 3) {
            list.delAllSpisok();
            cout << " Your list was deleted";
            list.printSpisok();
        }
        if (act == 4) {
            cout << "Your list: ";
            list.printSpisok();
        }
    }
}