#include<stdio.h>
#include<stdlib.h>
struct node
{
    int value;
    struct node *link;
};
void new(struct node *p){
    while(p!=NULL){
        printf("%d\n",p->value);
        p=p->link;
    }
}
int main(){
    struct node node1,node2,node3,*head;
    node1.value=1;
    node2.value=2;
    node3.value=3;
    head=&node1;
    node1.link=&node2;
    node2.link=&node3;
    node3.link=NULL;
    ne
    w(head);

    return 0;
}