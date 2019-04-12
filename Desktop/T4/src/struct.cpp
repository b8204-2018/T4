//
// Created by maria on 12.04.19.
//
#include <iostream>
#include"struct.h"

using namespace std;

int length (List *head) {
    int i = 0;
    while (head != nullptr){
        i++;
        head = head->next;
    }
    return i;
}

void left_push(List **head, int data) {

    List *tmp =new List; //создаем новый узел
    tmp->value = data;  //присваиваем ему значение
    tmp->next = (*head); //присваиваем указателю tmp адрес предыдущего узла
    (*head) = tmp; //присваиваем указателю head адрес нового узла
}


int left_pop(List **head) {
    List* prev = NULL;
    int val;
    if (head == NULL) {
        printf("List is empty.\n");
    }
    prev = (*head);
    val = prev->value;
    (*head) = (*head)->next;
    delete(prev);
    return val;
}

int right_pop(List **head) {
    List *tek = NULL;  //текущий узел
    List *prev = NULL;  //предыдущий узел
    //Получили NULL
    if (!head) {
        printf("List is empty.\n");
    }
    //Список пуст
    if (!(*head)) {
        printf("List is empty.\n");
    }

    tek = *head;
    while (tek->next) {
        prev = tek;
        tek = tek->next;
    }

    if (prev == NULL) {
        delete(*head);
        *head = NULL;
    } else {
        delete(tek->next);
        prev->next = NULL;
    }
}

void right_push(List *head, int value) {



    while (head->next) {
        head = head->next;}

    List *last = head;
    List *tmp = new List;
    tmp->value = value;
    tmp->next = NULL;
    last->next = tmp;
}

void print(const List *head) {
    while (head) {
        printf("%d ", head->value);
        head = head->next;
    }
    printf("\n");
}

void fromArray(List **head, int *arr, size_t size) {
    size_t i = size - 1;
    if (arr == NULL || size == 0) {
        return;
    }
    do {
        left_push(head, arr[i]);
    } while (i-- != 0);
}
