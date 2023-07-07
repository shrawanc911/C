#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int value;
    struct node *next;
    
    
};
void fun(struct node *p){
    while(p!=NULL){
        printf("%d\n",p->value);
        p=p->next;
    }
}
int main(){
    // struct node *head,*current;
    struct node *node1,*node2,*node3,*node4,*node5,*head;
    node1=malloc(sizeof(struct node));
    node2=malloc(sizeof(struct node));
    node3=malloc(sizeof(struct node));
    node4=malloc(sizeof(struct node));
    node5=malloc(sizeof(struct node));
    node1->value=1;
    node2->value=2;
    node3->value=3;
    node4->value=4;
    node5->value=5;
    head=node1;
    node1->next=node2;
    node2->next=node3;
    node3->next=node4;
    node4->next=node5;
    node5->next=NULL;
    fun(head);
    return 0;
    
    
}
