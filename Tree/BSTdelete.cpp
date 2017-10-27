#include<bits/stdc++.h>
using namespace std;

struct node{
 int key;
 struct node *right, *left;
};

struct node* newNode(int key)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key = key;
    temp->left = temp->right = NULL;
    return temp;
}

struct node* insert(struct node *root, int key){
    if(root == NULL)
        return newNode(key);
    if(key <= root->key)
        root->left = insert(root->left, key);
    else if(key > root->key)
        root->right = insert(root->right, key);
    return root;
}

void inorder(struct node *root){
    if(root->left != NULL)
        inorder(root->left);
    cout<< (root->key) <<endl;
    if(root->right != NULL)
        inorder(root->right);
}

struct node *minValueNode(struct node *root){
    struct node *temp = root;
    while(temp->left != NULL)
        temp = temp->left;
    return  temp;
}

struct  node* delete1(struct node *root, int key){
    if(root == NULL)
        return root;
    if(key > root->key)
        root->right = delete1(root->right, key);
    else if(key < root->key)
        root->left = delete1(root->left, key);
    else{
        if(root->left == NULL){
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL){
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        struct node* temp = minValueNode(root->right);
        root->key = temp->key;
        root->right = delete1(root->right, temp->key);
    }
    return root;
}

int main(){
    struct node *root = NULL;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);
    printf("Inorder traversal of the given tree \n");
    inorder(root);

    printf("\nDelete 20\n");
    root = delete1(root, 20);
    printf("Inorder traversal of the modified tree \n");
    inorder(root);

    printf("\nDelete 30\n");
    root = delete1(root, 30);
    printf("Inorder traversal of the modified tree \n");
    inorder(root);

    printf("\nDelete 50\n");
    root = delete1(root, 50);
    printf("Inorder traversal of the modified tree \n");
    inorder(root);

    return 0;
}
