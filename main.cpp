#include <iostream>

struct List {
    int m_value;
    int m_length = 0;
    struct List *m_next;
};

struct List *init(int value){
    List *head = new List;
    head->m_value = value;
    head->m_next = nullptr;
    //head->m_length++;
    return head;
}

struct List *add(List *&head, int value){
    List *elem = new List;
    elem->m_value = value;
    elem->m_next = head;
    elem->m_length = head->m_length;
    head = elem;
    return head;
}

int length (List *head) {
    if (head == nullptr){
        return 0;
    } else return head->m_length;
}

struct List *push (List *&head, int value){
    if (head == nullptr){
        head = init(value);
    } else {
        head = add (head, value);
    }
    head->m_length += 1;
    return head;
}

int pop (List *&head){
    int x = head->m_value;
    List *p = head->m_next;
    List *elem = head;
    head = p;
    delete elem;
    return x;
}

void print (List *head){
    if (head == nullptr){
        printf("List is empty.\n");
    } else {
        List *current = head;
        for (int i = 0; i < length(head); i++){
            printf("%d ", current->m_value);
            current = current->m_next;
        }
    }
    printf("\n");
}

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
