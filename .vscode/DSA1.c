#include<stdio.h>
int fun()
{
    static int a=10;
    a++;
    return &a;
}
int main()
{
    int *x, *y;
    x=fun();
    printf("%d\n",*x);
    y=fun();
    printf("%d",*y);
}