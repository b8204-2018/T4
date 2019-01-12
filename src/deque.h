#ifndef T4_LIB_DS_H
#define T4_LIB_DS_H

//class double-ended-queue
class deque {
private:
    unsigned size; //max size of deque
    int *vector;  //cycle vector
    bool empty;   //vector is empty
    int right;    //low border of deque
    int left;     //high border of deque
    int count;    //count of elements of deque
public:
    deque(int);

    void left_push(int);

    void right_push(int);

    int left_pop();

    int right_pop();

    char *print();

    int length();

};

#endif //T4_LIB_DS_H
