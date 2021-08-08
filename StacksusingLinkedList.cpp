//
//  StacksusingLinkedList.cpp
//  DataStrutres
//
//  Created by sahruday  reddy patti on 11/06/21.
//

#include <iostream>

struct Node
{
    int data;
    Node* link;
};
Node* top = NULL;

void push(int x)
{
    Node* newnode = new(Node);
    newnode -> data = x;
    newnode -> link = top;
    top = newnode;
}

void pop()
{
    Node* temp;
    if(top==NULL) return;
    temp = top;
    top = top -> link;
    delete(temp);
}
