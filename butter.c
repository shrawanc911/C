#include<stdio.h>
int main(){
    int n=5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < (i*2)-1; j++)
        {
            printf("*");
        }
        printf("\n");        
    }
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < n-i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < (i*2)-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    // for(int i=0;i<n;i++){
    //         for(int j=0;j<i;j++){
    //            printf("* ");
    //         }
    //         int spaces=2*(n-i);
    //         for(int j=0;j<spaces;j++){
    //             printf("  ");
    //         }
    //         for(int j=0;j<i;j++){
    //             printf("* ");
    //         }
    //         printf("\n");
    // }
    // for(int i=n;i>0;i--){
    //         for(int j=0;j<i;j++){
    //            printf("* ");
    //         }
    //         int spaces=2*(n-i);
    //         for(int j=0;j<spaces;j++){
    //             printf("  ");
    //         }
    //         for(int j=0;j<i;j++){
    //             printf("* ");
    //         }
    //         printf("\n");
    // }
}