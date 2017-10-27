#include<bits/stdc++.h>
using namespace std;

struct node{
    int key;
    struct node *left, *right;
};

struct node *newNode( int key){
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key = key;
    temp->left = temp->right = NULL;
    return temp;
};

struct node* insert(struct node *root, int key){
    if(root == NULL){
        return newNode(key);
    }
    if(key <= root->key)
        root->left = insert(root->left, key);
    else if(key > root->key)
        root->right = insert(root->right, key);
    return root;
};

void inorder(struct node *root){
    if(root->left != NULL)
        inorder(root->left);
    cout<< (root->key) <<endl;
    if(root->right != NULL)
        inorder(root->right);
}
int main(){
    struct node *root = NULL;
    root = insert(root, 50);
    insert(root,40);
    insert(root,45);
    insert(root,60);
    insert(root,65);
    insert(root,30);
    insert(root,70);
    inorder(root);
}
