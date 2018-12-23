#include <iostream>

using namespace std;

struct list {
    int data;
    struct list *next;
    };
struct queue {
    short int size;
    struct list *first, *last, *cur;
    };

void init(queue *q) {
    q->first = NULL;
    q->last = NULL;
    }

bool empty (queue *q) {
    if (q->first==q->last) return true;
    else return false;
    }

int push(queue *Q, queue &A, int value) {
    Q->cur = new list;
    Q->cur->data = value;
    Q->cur->next = NULL;
    A.size++;
    if (Q->first == NULL) {
        Q->first = Q->cur;
        Q->last = Q->cur;
    }
    else {
        Q->last->next = Q->cur;
        Q->last = Q->cur;
    }
    return 0;
}

int length(queue l) {
    return l.size; }

int pop (queue *Q, queue &A) {
    Q->cur = Q->first;
    Q->first = Q->first->next; //смещение указателя
    delete Q->cur;
    if (Q->first == NULL) {
        Q->last = NULL;
    }
    A.size--;
    return A.size;
}

int print(queue *q) {
    int p;
    if(empty(q)== true) {
        cout << "Empty!\n";
    }
    q->cur = q->first;
    while (q->cur != NULL) {
        p = q->cur->data;
        cout << q->cur->data;
        q->cur = q->cur->next;
    }
    return 0;
}

int main() {
    queue *q;
    queue m;
    int a, n;
    int emp = 0;
    cin >> n;
    init(q);
    m.size = 0;
    for (int i = 0; i < n; i++) {
        printf("Enter the number: ");
        cin >> a;
        push(q, m, a);
    }
    cout << "Length is: ";
    cout << length(m) << "\n";
    cout << "Queue is: ";
    print(q);
    cout << "\n";
    while(q->first != NULL) {
        emp = pop(q, m);
    }
    if (emp == 0){
        cout << "Queue is empty";
    }
    return 0;
}