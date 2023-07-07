#include<stdio.h>
#include<stdlib.h>
struct node{
    int value;
    struct node *link;
}*node[3];
int main(){
    struct node *head;
    // node[0]=malloc(sizeof(struct node));
    // node[1]=malloc(sizeof(struct node));
    // node[0]->value=12;
    // node[1]->value=31;
    // head = node[0];
    // node[0]->link=node[1];
    // node[1]->link=NULL;
    // new(head);
    
    for (int i = 0; i < 2; i++)
    {
        node[i]=malloc(sizeof(struct node));
        scanf("%d",&node[i]->value);
        node[i]->link=node[i+1];
    }
    head=node[0];
    for (int i = 0; i < 2; i++)
    {
        printf("new =%d",head->value);
        head=node[i]->link;
    }
    

}
// void new(struct node *p){
//     while(p!=NULL){
//         printf("%d\n",p->value);
//         // printf("He/She is %c\n",p->gender);
//         p=p->link;
//     }
// }