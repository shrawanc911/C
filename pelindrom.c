#include<stdio.h>
int main()
{
    int a,r,b,s;
    printf("Enter number:");
    scanf("%d",&b);
    a=b;
    s=0;
    while (a>0 )
    {
        r=a%10;
        s=r+(s*10);
        a=a/10;   
    }
    if (s==b)
    {
        printf("%d is the Palindrome number",b);
    }
    else
    {
        printf("%d is not the Palindrome number",b);
    }
    
    
    
}