//
//  LinkedList.cpp
//  MIT
//
//  Created by sahruday  reddy patti on 24/05/21.
//

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

void printlinkedlist(Node *n)
{
    while(n!= NULL)
    {
        cout<< n->data <<  " ";
        n = n->next;
    }
}

void insertatbegin(Node** head,int new_data)
{
    Node *new_node = new Node();
    new_node -> data =new_data;
    new_node -> next = *head;
    *head = new_node;
}

void insertafter(Node* prev_node,int new_data)
{
    if (prev_node == NULL)
        {
            cout << "the given previous node cannot be NULL";
            return;
        }
    Node *new_node = new Node();
    new_node -> data = 15;
    new_node -> next = prev_node -> next;
    prev_node -> next = new_node;
    
}

void insertend(Node **head,int new_data)
{
    Node *new_node = new Node();
    new_node -> data = new_data;
    new_node -> next = NULL;
    Node *last = *head;
    while(last -> next != NULL)
    {
        last = last->next;
    }
    last -> next = new_node;
    return;
}


int main()
{
    Node *head = NULL;
    Node* second = NULL;
    Node* third = NULL;
    head = new Node();
    second = new Node();
    third = new Node();
    head -> data = 5;
    head -> next = second;
    second -> data = 10;
    second -> next = third;
    third -> data = 20;
    third -> next = NULL;
    
    insertatbegin(&head,0);
    insertafter(second,15);
    printlinkedlist(head);
  
}


