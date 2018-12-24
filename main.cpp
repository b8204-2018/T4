#include <iostream>

using namespace std;
Struct Stack{
    int oc_cells=0;
    int* stack_body= new int[20];
        };
Stack push(elem){  try{
        if (oc_cells == 20) {
            throw 361;
        }
        stack_body[oc_cells]=elem;
        oc_cells = oc_cells+1;
    }
    catch(int err){
        cout<< "Stack is full\n" << endl;
    }

}
Stack Pop(){
    try {
        if (oc_cells == 0){
            throw 1233;
        }
        stack_body[oc_cells]=0;
        oc_cells = oc_cells -1;

    }
    catch (int err){
        cout<<"Stack is empty\n"<<endl;
    }

}
Stack show(){ int i=0;
    while(i<=oc_cells){
        cout<<i<<" "<<stack_body[i] << endl;
        i++;
    }

}

int main() {
    int elem;
    int call=-1;
    while (call != 3) {
        cout << "input 1 if you want to push element in stack\n"
                "input 2 if you want to pop element from stack\n"
                "input 3 if you want to close program\n"
                "input 4 if you want to see your stack\n";
        cin >> call;
        switch(call) {
            case 1 :
                cout << " Input element that you want to add to stack\n";
                cin >> elem;
                push(elem);
                break;
            case 2 :
                pop();
                break;
            case 4 :
                show();
                break;
            default :
                cout << "why do you do this";
        }
    }
    return 0;
}