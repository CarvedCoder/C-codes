#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};

void traversal(struct node*head){
    struct node * pos = head;
    do{ 
        printf(" %d -> ",pos->data);
        pos = pos->next;
    }
    while(pos!=head);
    printf("%d\n",head->data);
}

struct node *create_node_at_start(struct node *head, int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node *));
    newnode->data = data;
    struct node*pos = head->next;
    while(pos->next!= head){
    pos =pos->next;
    }
    pos->next = newnode;
    newnode->next = head;
    head = newnode;
    return head;
}

struct node*create_node_at_end(struct node*head,int data){
    struct node*newnode = (struct node*)malloc(sizeof(struct node*));
    newnode->data = data;
    struct node*pos = head->next;
    while(pos->next!= head){
        pos = pos->next;
    }
    pos->next = newnode;
    newnode->next = head;
    return head;
}

struct node*create_node_at_index(struct node*head,int data,int index){
    struct node*newnode = (struct node*)malloc(sizeof(struct node*));
    newnode->data = data;
    struct node*pos = head;
    for(int i =0;i<index-1;i++){
        pos = pos->next;
    }
    newnode->next = pos->next;
    pos->next = newnode;
    return head;
}

struct node*create_node_at_value(struct node*head,int data,int val){
    struct node*newnode = (struct node*)malloc(sizeof(struct node*));
    newnode->data = data;
    struct node*pos = head;
    while(pos->data != val){
        pos= pos->next;
    }
    newnode->next = pos->next;
    pos->next = newnode;
    return head;
}

struct node*delete_node_at_start(struct node*head){
    struct node*pos = head;
    struct node*ptr = head->next;
    while(ptr->next != head){
        ptr = ptr->next;
    }
    ptr->next = pos->next;
    head = head->next;
    free(pos);
    return head;
}

struct node*delete_node_at_end(struct node*head){
    struct node*pos = head;
    struct node*ptr = head->next;
    while(ptr->next!=head){
        ptr=ptr->next;
        pos=pos->next;
    }
    pos->next = head;
    free(ptr);
    return head;

}

struct node*delete_node_at_index(struct node*head,int index){
    struct node*pos = head;
    struct node*ptr = head->next;
    for(int i = 0;i<index-1;i++){
        pos= pos->next;
        ptr = ptr->next;
    }
    pos->next = ptr->next;
    free(ptr);
    return head;
}

struct node*delete_node_at_value(struct node*head,int val){
    struct node*pos = head;
    struct node*ptr =head->next;
    while(ptr->data !=val){
        pos= pos->next;
        ptr = ptr->next;
    }
    pos->next = ptr->next;
    free(ptr);
    return head;
}

int main(void){
    struct node*head;

    head = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->next = head;
    printf("linked list before deletion\n");
    head = create_node_at_start(head,5);
    create_node_at_end(head,20);
    create_node_at_end(head,25);
    create_node_at_end(head,35);
    create_node_at_index(head,30,4);
    create_node_at_value(head,40,35);
    create_node_at_end(head,45);
    traversal(head);
    printf("linked list after deletion\n");
    head = delete_node_at_start(head);
    delete_node_at_end(head);
    delete_node_at_index(head,2);
    delete_node_at_value(head,35);
    traversal(head);
}
