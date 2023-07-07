#include<stdio.h>
int main()
{
    int row,col,sum=0;
    int arr[100][100];
    int sk[100][100];
    int s[100][100];
    printf("Enter row:");
    scanf("%d",&row);
    printf("Enter col:");
    scanf("%d",&col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter value of row[%d] and col[%d] Array 1 :",i,j);
            scanf("%d",&arr[i][j]);
        }
        
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter value of row[%d] and col[%d] Array 2:",i,j);
            scanf("%d",&sk[i][j]);
        }
        
    }
    printf("multiply of the matrix=\n");    
        for(int i=0;i<row;i++)    
        {    
        for(int j=0;j<col;j++)    
        {    
        // mul[i][j]=0;    
        for(int k=0;k<col;k++)    
        {    
        s[i][j]+=arr[i][k]*sk[k][j];    
        }    
        }    
        }
    
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         s[i][j]=arr[i][j]+sk[i][j];
    //     }
        
    // }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t",s[i][j]);
        }
        printf("\n");
    }

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //        sum+=s[i][j];
    //     }
        
    // }
    // printf("Sum is this %d",sum);
    
}