#include<stdio.h>
int main()
{
    int a=0,b=1,c,d;
    printf("Enter number:");
    scanf("%d",&d);
    for (int i = 1; i <=d; i++)
    {
        printf("Your fiponacci number is %d \n",a);
        c=a+b;
        a=b;
        b=c;
    }
}