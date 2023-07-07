#include<stdio.h>
int main()
{
    int a=10;
    int *ptr=&a;
    int **ptr1=&ptr;
    printf("%d\n",a);
    printf("%d\n",*ptr);
    printf("%d\n",**ptr1);
    **ptr1=1000;
    printf("%d\n",a);
    printf("%d\n",*ptr);
    
}