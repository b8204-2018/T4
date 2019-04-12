//
// Created by maria on 12.04.19.
//

#ifndef UNTITLED2_STRUCT_H
#define UNTITLED2_STRUCT_H
using namespace std;

struct List {
    int value;
    struct List *next;

} ;


int length (List *head);
void left_push(List **head, int data);
int left_pop(List **head);
int right_pop(List **head);
void right_push(List *head, int value);
void print(const List *head);
void fromArray(List **head, int *arr, int size);

#endif //UNTITLED2_STRUCT_H
