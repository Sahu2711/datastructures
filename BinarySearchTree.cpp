//
//  BinarySearchTree.cpp
//  DataStrutres
//
//  Created by sahruday  reddy patti on 10/06/21.
//

#include<iostream>
using namespace std;
//Definition of Node for Binary search tree
struct BstNode {
    int data;
    BstNode* left;
    BstNode* right;
};

// Function to create a new Node in heap
BstNode* GetNewNode(int data) {
    BstNode* newNode = new BstNode();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// To insert data in BST, returns address of root node
BstNode* Insert(BstNode* root,int data) {
    if(root == NULL) { // empty tree
        root = GetNewNode(data);
    }
    // if data to be inserted is lesser, insert in left subtree.
    else if(data <= root->data) {
        root->left = Insert(root->left,data);
    }
    // else, insert in right subtree.
    else {
        root->right = Insert(root->right,data);
    }
    return root;
}
//To search an element in BST, returns true if element is found
bool Search(BstNode* root,int data) {
    if(root == NULL) {
        return false;
    }
    else if(root->data == data) {
        return true;
    }
    else if(data <= root->data) {
        return Search(root->left,data);
    }
    else {
        return Search(root->right,data);
    }
}

int FindMinIterative(BstNode* root)
{
    if(root == NULL)
    {
        cout<<"Error,tree is empty";   //here root is a local variable so we can use root directly for traversing
        return -1;                     //else create another node and assign the root to it and use that node.
    }
    while(root->left != NULL)   //FOR  RECURSIVE SOLUTION REPLACE WHILE WITH IF(ROOT->LEFT = NULL,RETURN THE DATA
                                //IF NOT NULL CAL THE FINDMIN FUNCTION IN THE ELSE IF.
    {
        root = root ->left;             //to find max replace left with right.
    }
    return root -> data;
}


int FindHeight(BstNode* root)
{
    if(root == NULL)
    {
        return -1;
    }
    return max(FindHeight(root -> left),FindHeight(root -> right)) + 1 ;
    
}


BstNode* DeleteNode(BstNode* root,int data)
{
    if(root == NULL)
    {
        return root;
    }
    else if(data < root->data)
    {
        root -> left = DeleteNode(root->left,data);
    }
    else if(data > root->data)
    {
        root ->right = DeleteNode(root->right,data);
    }
    else
    {
        if(root->left == NULL && root->right == NULL)
        {
            delete root;
            root = NULL;
        }
        else if(root->left == NULL)
        {
            BstNode* temp == root;
            root = root->right;
            delete temp
        }
        else if(root->right == NULL)
        {
            BstNode* temp == root;
            root = root->left;
            delete temp;
        }
        else
        {
            BstNode* temp = FindMin(root->right);
            root->data = temp->data;
            root->right = DeleteNode(root->right,temp->data);
        }
    }
    return root; 
}



int main()
{
    BstNode* root = NULL;
    root = Insert( root, 15);
    
}
