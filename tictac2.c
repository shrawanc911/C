#include <stdio.h>
int main()
{
    char a [9] ={'1','2','3','4','5','6','7','8','9'};
    int chance = 0;

    printf("\n\n\n\t\t\t\t Tic Tac Game");
    printf("\n\n\n\t\t\t\t ---|---|---\n");
    printf("\t\t\t\t  %c | %c | %c",a[0],a[1],a[2]);
    printf("\n\t\t\t\t ---|---|---\n");
    printf("\t\t\t\t  %c | %c | %c",a[3],a[4],a[5]);
    printf("\n\t\t\t\t ---|---|---\n");
    printf("\t\t\t\t  %c | %c | %c",a[6],a[7],a[8]);



    

    while(chance<10){
        
        char p,s;

    printf("\n\nEnter the position : ");
    scanf("%c",&p);
    printf("Enter symbol");
    scanf("%c",&s);

    for(int i =0;i<9;i++)
    {
        if(a[i]==p)
        {
            a[i]=s;
        }
    }



    printf("\n\n\n\t\t\t\t ---|---|---\n");
    printf("\t\t\t\t  %c | %c | %c",a[0],a[1],a[2]);
    printf("\n\t\t\t\t ---|---|---\n");
    printf("\t\t\t\t  %c | %c | %c",a[3],a[4],a[5]);
    printf("\n\t\t\t\t ---|---|---\n");
    printf("\t\t\t\t  %c | %c | %c",a[6],a[7],a[8]);

    if ((a[0]=='x' && a[1]=='x' && a[2]=='x') || (a[3]=='x' && a[4]=='x' && a[5]=='x') || (a[6]=='x' && a[7]=='x' && a[8]=='x') || (a[0]=='x' && a[3]=='x' && a[6]=='x') || (a[1]=='x' && a[4]=='x' && a[7]=='x') || (a[2]=='x' && a[5]=='x' && a[8]=='x') || (a[0]=='x' && a[4]=='x' && a[8]=='x') || (a[2]=='x' && a[4]=='x' && a[6]=='x'))
    {
        printf("X won");
    }
    else if ((a[0]=='0' && a[1]=='0' && a[2]=='0') || (a[3]=='0' && a[4]=='0' && a[5]=='0') || (a[6]=='0' && a[7]=='0' && a[8]=='0') || (a[0]=='0' && a[3]=='0' && a[6]=='0') || (a[1]=='0' && a[4]=='0' && a[7]=='0') || (a[2]=='0' && a[5]=='0' && a[8]=='0') || (a[0]=='0' && a[4]=='0' && a[8]=='0') || (a[2]=='0' && a[4]=='0' && a[6]=='0'))
    {
        printf("0 won");
    }
    else if(chance==9){
        printf("Draw!!!");
    }
    chance++;
    }
}