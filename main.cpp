#include <iostream>
#include "src/struct.h"


using namespace std;

int main(){
    List *MyList = new List;
    MyList->Head = nullptr;
    int select(0);
    do {
        printf("nazhmi 1 chtoby sozdat' stek\n"
               "nazhmi 2 chtoby dobavit` element\n"
               "nazhmi 3 chtoby udalit' element\n"
               "nazhmi 4 chtoby udalit' stek\n"
               "nazhmi 5 chtoby napechatat' stek\n"
               "nazhmi 6 chtoby vyvesti dlinu steka\n"
               "nazhmi 0 chtoby zakonchit'\n");
        scanf("%d", &select);
        if (select == 1){
            int n;
            printf("Vvedite razmernost'\n");
            scanf("%d", &n);
            for (int i=0; i<n; i++) Push(i,MyList) ;
        }
        if (select == 2){
            int value;
            printf("Vvedite znachenie elementa\n");
            scanf("%d", &value);
            Push(value,MyList);
        }
        if (select == 3){
            printf("%d done delelement\n"  );
            DelElement(MyList);
        }
        if (select == 4){
            printf("%d done\n"  );
            Pop(MyList);
        }
        if (select == 5){
            printf("The list is: ");
            Print(MyList);
        }
        if (select == 6){

            printf("The length is " );
            length(MyList);
        }
    } while (select != 0);
    return 0;}