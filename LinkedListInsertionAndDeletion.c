#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traversal(struct node*pos)
{
    while (pos != NULL)
    {
        printf("%d -> ", pos->data);
        pos = pos->next;
    }
    printf("NULL\n");
}

struct node *create_node_at_end(struct node*first,int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    struct node*pos = first;
    while(pos->next != NULL){
            pos = pos->next;
        }
        pos->next = newnode;
        newnode->next = NULL;

    return first;
}

struct node *create_node_at_start(struct node *first, int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node *));
    newnode->data = data;
    newnode->next = first;
    return newnode;
}

struct node *create_node_at_index(struct node *first, int data, int index)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node*));
    struct node *pos = first;
    int i = 0;
    while (i != index - 1)
    {
        pos = pos->next;
        i++;
    }
    newnode->data = data;
    newnode->next = pos->next;
    pos->next = newnode;
    return first;
}

struct node *create_node_at_val(struct node *first, int val, int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node *));
    struct node *pos = first;
    while (pos->next != NULL)
    {
        if (pos->data == val)
        {
            newnode->data = data;
            newnode->next = pos->next;
            pos->next = newnode;
            pos = pos->next;
        }
        pos = pos->next;
    }
    return first;
}

struct node*delete_at_start(struct node*first){
    struct node* pos = first;
    first = first->next;
    free(pos);
    return first;
}

struct node*delete_at_end(struct node*first){
    struct node*pos = first;
    struct node*ptr = first->next;
    while(ptr->next){
        pos = pos->next;
        ptr = ptr->next;
    }
    pos ->next = NULL;
    free(ptr);
    return first;
}

struct node*delete_at_index(struct node*first,int index){
    struct node *pos = first;
    struct node *ptr = first->next;
    int i = 0;
    while(i!=index-1){
        pos = pos->next;
        ptr = ptr->next;
        i++;
    }
    pos->next = ptr->next;
    free(ptr);
    return first;
}

struct node*delete_at_value(struct node*first,int val){
    struct node * pos = first;
    struct node*ptr = first->next;
    while(ptr->data != val && ptr->next != NULL){
        pos = pos->next;
        ptr=ptr->next;
    }
    if(ptr->data == val){
    pos->next = ptr->next;
    free(ptr);
    }
    return first;
}

int main(void)
{
    printf("The linkedlist before deletion\n");
    struct node *first = (struct node*)malloc(sizeof(struct node*));
    first->data = 10;
    create_node_at_end(first,20);
    create_node_at_end(first,30);
    first = create_node_at_start(first, 5);
    create_node_at_index(first, 25, 3);
    create_node_at_val(first, 25, 27);
    create_node_at_end(first,40);
    create_node_at_end(first,45);
    traversal(first);
    delete_at_index(first,4);
    delete_at_value(first,25);
    first = delete_at_start(first);
    delete_at_end(first);
    printf("Traversal after deletion\n");
    traversal(first);
}