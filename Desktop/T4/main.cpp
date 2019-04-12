#include <iostream>
#include"src/struct.h"

using namespace std;



int main() {
    List *head = NULL;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //Создаём список из массива
    fromArray(&head, arr, 10);
    int select(0);
    do {
        printf("nazhmi 1 chtoby dobavit` element v nachalo\n"
               "nazhmi 2 chtoby dobavit` element v konec\n"
               "nazhmi 3 chtoby udalit' element iz nachala\n"
               "nazhmi 4 chtoby udalit' element s konca\n"
               "nazhmi 5 chtoby vyvesti spisok\n"
               "nazhmi 6 chtoby vyvesti dlinu spiska\n"
               "nazhmi 0 to finish the program\n");
        scanf("%d", &select);
        if (select == 1){
            int value;
            printf("Vvedite znachenie elementa\n");
            scanf("%d", &value);
            left_push(&head, value);
        }
        if (select == 2){
            int value;
            printf("Vvedite znachenie elementa\n");
            scanf("%d", &value);
            right_push(head, value);
        }
        if (select == 3){
            printf("%d is popped\n", left_pop(&head));

        }
        if (select == 4){
            printf("%d is popped\n", right_pop(&head));

        }
        if (select == 6){
          int x = length(head);
        printf("The length is %d\n", x);
        }
        if (select == 5){
            printf("The list is: ");
            print(head);
        }
    } while (select != 0);
    return 0;}




