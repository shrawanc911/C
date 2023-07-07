#include<stdio.h>
#include<stdlib.h>
struct node{
    int value;
    char gender;
    struct node *link;
};
int main(){
    struct node *node1,*node2,*node3,*head;
    node1=malloc(sizeof(struct node));
    node2=malloc(sizeof(struct node));
    node3=malloc(sizeof(struct node));
    node1->value=1;
    node1->gender='M';
    node2->value=2;
    node2->gender='F';
    node3->value=3;
    node3->gender='M';
    head=node1;
    node1->link=node2;
    node2->link=node3;
    node3->link=NULL;
    loo(head);
}
void loo(struct node *p){
    while(p!=NULL){
        printf("%d\n",p->value);
        printf("He/She is %c\n",p->gender);
        p=p->link;
    }
}