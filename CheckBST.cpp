//
//  CheckBST.cpp
//  DataStrutres
//
//  Created by sahruday  reddy patti on 15/06/21.
//
#include "BinarySearchTree.cpp"

bool IsSubTreeLesser(BstNode* root,int value);
bool IsSubTreeGreater(BstNode* root,int value);

bool IsBinarySearchTree(BstNode* root)
{
    if(root == NULL) return true;
    if( (IsSubTreeLesser(root->left,root->data)) && (IsSubTreeGreater(root ->right,root -> data))
       && (IsBinarySearchTree(root ->left)) && (IsBinarySearchTree(root -> right)))
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

bool IsSubTreeLesser(BstNode* root,int value)
{
    if(root == NULL) return true;
    if(root ->data <= value && IsSubTreeLesser(root ->left,value) && IsSubTreeLesser(root->right,value))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool IsSubTreeGreater(BstNode* root,int value)
{
    if(root == NULL) return true;
    if(root ->data >= value && IsSubTreeGreater(root ->left,value) && IsSubTreeGreater(root->right,value))
    {
        return true;
    }
    else
    {
        return false;
    }
}

