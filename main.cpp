#include <iostream>
#include "src/queue2linklist.h"
#include "gtest/gtest.h"
using namespace std;
int main() {
    /*
     * Тесты добавлены но я немогу понять причину почему
     */
queue *q=new queue;
int a,b;
//cout<<"Enter queue size"<<endl;
//cin>>a;
init(q) ;
for(int i=0;i<7;i++){
    cout<<"enter the number to put in queue"<<endl;
    cin>>b;
    cout<<endl;
    push(q,b);
    b++;
}
print(q);
   while(q->Head!=NULL) {
       pop(q);
   }
   print(q);
    cout << "Queue length: "<< length(q) <<endl;
return 0;
}