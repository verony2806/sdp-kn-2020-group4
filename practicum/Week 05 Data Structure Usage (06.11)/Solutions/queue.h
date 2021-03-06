#ifndef __QUEUE_H
#define __QUEUE_H

#include <iostream>

template <class T>
class Queue
{
private:
    struct Node
    {
        T data;
        Node *next, *prev;
    };

    Node *first, *last;

public:
    Queue();
    ~Queue();

    void push(T data);
    T pop();

    bool hasItems();

    void print();
};

#include "queue.cpp"

#endif