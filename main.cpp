#include <iostream>
#include "slist.h"

using namespace std;

int main() {
    List *head(nullptr);
    int select(0);
    do {
        printf("Press 1 to push an element\n"
               "Press 2 to pop an element\n"
               "Press 3 to print length of the list\n"
               "Press 4 to print the list\n"
               "Press 0 to finish the program\n");
        scanf("%d", &select);
        if (select == 1){
            int value;
            printf("Enter the value of element\n");
            scanf("%d", &value);
            push(head,value);
        }
        if (select == 2){
            printf("%d is popped\n", pop(head));
        }
        if (select == 3){
            int x = length(head);
            printf("The length is %d\n", x);
        }
        if (select == 4){
            printf("The list is: ");
            print(head);
        }
    } while (select != 0);
    return 0;
}
