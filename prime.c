#include<stdio.h>
int a,c;
int pro()
{
    int i,c = 0;
    printf("Enter number:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0){
        c++;
        }
    }
    return c;
}
int main()
{
    int d;
    d=(pro());
    if(d==2)
    {
        printf("%d is the prime number",a);
    }
    else 
    {
        printf("%d is not a prime number",a);
    }
    
}