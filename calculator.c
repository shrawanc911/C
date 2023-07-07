#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,s,r,n;
    float e;
    int row,col,sum=0;
    int arr[100][100];
    int sk[100][100];
    int su[100][100];
    printf("Enter 1 for addition\n");
    printf("Enter 2 for substraction\n");
    printf("Enter 3 for multiplication\n");
    printf("Enter 4 for division\n");
    printf("Enter 5 for remainder\n");
    printf("Enter 6 for fibonacci\n");
    printf("Enter 7 for prime number\n");
    printf("Enter 8 for pelindrome\n");
    printf("Enter 9 for GCD\n");
    printf("Enter 10 for Multiplication of two matrix\n");
    printf("Enter 11 for Sum of two matrix\n");
    printf("Enter 12 for Sum of n numbers\n");
    printf("Enter 13 for areas\n");
    printf("Enter your choice:");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("Enter first value:");
        scanf("%d",&b);
        printf("Enter second value:");
        scanf("%d",&c);
        d=c+b;
        printf("Addition of two values = %d",d);
        break;
    case 2:
         printf("Enter first value:");
        scanf("%d",&b);
        printf("Enter second value:");
        scanf("%d",&c);
        d=b-c;
        printf("Substraction of two values = %d",d);
        break;
    case 3:
        printf("Enter first value:");
        scanf("%d",&b);
        printf("Enter second value:");
        scanf("%d",&c);
        d=c*b;
        printf("Multiplication of two values = %d",d);
        break;
    case 4:
        printf("Enter first value:");
        scanf("%d",&b);
        printf("Enter second value:");
        scanf("%d",&c);
        d=b/c;
        printf("Division of two values = %d",d);
        break;
    case 5:
        printf("Enter first value:");
        scanf("%d",&b);
        printf("Enter second value:");
        scanf("%d",&c);
        d=b%c;
        printf("Remainder of two values = %d",d);
        break;
    case 6:
        printf("Enter your number");
        scanf("%d",&b);
        for (int i = 1; i <=d; i++)
            {
                printf("Your fiponacci number is %d \n",a);
                c=a+b;
                a=b;
                b=c;
             }
        break;
    case 7:
        printf("Enter number:");
        scanf("%d",&b);
        c=0;
        for(int i=1;i<=b;i++)
            {
                if(b%i==0){
                c++;
                }
            }
        if(c==2)
            {
                printf("%d is the prime number",b);
            }
            else 
            {
                printf("%d is not a prime number",b);
            }
    break;
    case 8:
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
        break;
    case 9:
            printf("Enter first number:");
            scanf("%d",&b);
            printf("Enter second number:");
            scanf("%d",&c);        
            if (b>c)
            {
                do
                {
                    r=b%c;
                    b=c;
                    c=r;
                } while (c!=0);
                printf("%d is the GCD\n",b);
            }
            else
            {
                do
                {
                    r=c%b;
                    c=b;
                    b=r;
                    
                } while (b!=0);
                printf("%d is the GCD\n",c);
            }
            // printf("%d is the GCD",b);           
            break;
    case 10:
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
                    printf("Enter value of row[%d] and col[%d] Arrray 2:",i,j);
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
                su[i][j]+=arr[i][k]*sk[k][j];    
                }    
                }    
                }
            for (int i = 0; i < row; i++)
                {
                    for (int j = 0; j < col; j++)
                    {
                        printf("%d\t",su[i][j]);
                    }
                    printf("\n");
                }
                break;
        case 11:
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
                        printf("Enter value of row[%d] and col[%d] Arrray 2:",i,j);
                        scanf("%d",&sk[i][j]);
                    }
                    
                }
                for (int i = 0; i < row; i++)
                {
                    for (int j = 0; j < col; j++)
                    {
                        su[i][j]=arr[i][j]+sk[i][j];
                    }
                    
                }
                for (int i = 0; i < row; i++)
                {
                    for (int j = 0; j < col; j++)
                    {
                        printf("%d\t",su[i][j]);
                    }
                    printf("\n");
                }
                break;
        case 12:
            printf("Enter number:");
            scanf("%d",&n);
            printf("This is the sum of %d",(n*(n+1))/2);
            break;
        case 13:
            printf("Enter 1 for area of rectangle\n");
            printf("Enter 2 for area of triangle\n");
            printf("Enter 3 for area of circle\n");
            printf("Enter 4 for area of square\n");
            printf("Enter your choice:");
            scanf("%d",&b);
            switch (b)
            {
            case 1:
                printf("Enter length of rectangle:");
                scanf("%d",&c);
                printf("Enter width of rectangle:");
                scanf("%d",&d);
                printf("%d is the area of the rectangle",c*d);
                break;
            case 2:
                printf("Enter base of triangle:");
                scanf("%d",&c);
                printf("Enter height of triangle:");
                scanf("%d",&d);
                printf("%.2f is the area of triangle",(float)(0.5*(c*d)));
                break;
            case 3:
                printf("Enter radius of circle:");
                scanf("%d",&c);
                printf("%.2f is the area of circle",(float)(3.14*(c*c)));
                break;
            case 4:
                printf("Enter length of square:");
                scanf("%d",&c);
                printf("%d is the area of circle",c*c);
                break;
            default:
                break;
            }
            break;
    default:
        printf("Invalid choice");
        break;
    }
     

}