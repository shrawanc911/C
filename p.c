#include<stdio.h>

int main(){
int a,b,c,d[50];
printf("Enter value\n");
scanf("%d",&a);
while (1>0)
{
    int i=0;
    d[i]=a%10;
    printf("%d",d[i]);
    c=d[i]/10;
    if (c==0)
    {
        goto label;
    }
    i++;
}

label:    
}