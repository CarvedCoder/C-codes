#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*left;
    struct node*right;
};

struct node*create_node(int data){
    struct node*newnode = (struct node*)malloc(sizeof(struct node*));
    newnode->data= data;
    newnode->left= NULL;
    newnode->right = NULL;
    return newnode;
}

void preorder_traversal(struct node*root){
    if(root == NULL){
        return;
    }
    printf(" %d ->",root->data);
    preorder_traversal(root->left);
    preorder_traversal(root->right);
}

void postorder_traversal(struct node*root){
    if(root == NULL){
        return;
    }
    postorder_traversal(root->left);
    postorder_traversal(root->right);
    printf(" %d ->",root->data);
}

void inorder_traversal(struct node*root){
    if(root == NULL){
        return;
    }
    inorder_traversal(root->left);
    printf("%d -> ",root->data);
    inorder_traversal(root->right);
}

int main(void){
    struct node*root = create_node(2);
    root->right = create_node(7);
    root->left = create_node(3);
    root->left->left = create_node(10);
    root->right->left = create_node(15);
    postorder_traversal(root);
    printf(" end\n");
}