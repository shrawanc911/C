#include<stdio.h>
#include<conio.h>
int check(char a[],char P,char S);
void gamename()
{
    printf("\n\n\n\t\t\t\t Tic Tac Game");
}
 void show(char a[])
 {
    printf("\n\n\n\t\t\t\t ---|---|---\n");
    printf("\t\t\t\t  %c | %c | %c",a[0],a[1],a[2]);
    printf("\n\t\t\t\t ---|---|---\n");
    printf("\t\t\t\t  %c | %c | %c",a[3],a[4],a[5]);
    printf("\n\t\t\t\t ---|---|---\n");
    printf("\t\t\t\t  %c | %c | %c",a[6],a[7],a[8]);
 }
 void symbol()
 {
    printf("\n\nPlayer 1 symbol :x:\n");
    printf("Player 2 symbol :0:");
 }
 void start()
 {
    char pa;
    printf("\n\nEnter who will start the game : Player 1 or Player 2:");
    scanf("%c",&pa);
 }
 int count=0;
 void play(char a[])
 {
    char p,s;
    printf("\nEnter position :");
    scanf("%c\n",&p);
    printf("Enter symbol :");
    scanf("%c\n",&s);
    check(a,p,s);
 }
 int check(char a[],char P,char S)
 {
    for(int i=0;i<9;i++)
    {
        if(a[i]==P)
        {
            a[i]=S;
            return a[i];
        }
    }
    return -1;
    count++;
 }
 int end(char a[])
 {
    if ((a[0]=='x' && a[1]=='x' && a[2]=='x') || (a[3]=='x' && a[4]=='x' && a[5]=='x') || (a[6]=='x' && a[7]=='x' && a[8]=='x') || (a[0]=='x' && a[3]=='x' && a[6]=='x') || (a[1]=='x' && a[4]=='x' && a[7]=='x') || (a[2]=='x' && a[5]=='x' && a[8]=='x') || (a[0]=='x' && a[4]=='x' && a[8]=='x') || (a[2]=='x' && a[4]=='x' && a[6]=='x'))
    {
        return 100;
    }
    else if ((a[0]=='0' && a[1]=='0' && a[2]=='0') || (a[3]=='0' && a[4]=='0' && a[5]=='0') || (a[6]=='0' && a[7]=='0' && a[8]=='0') || (a[0]=='0' && a[3]=='0' && a[6]=='0') || (a[1]=='0' && a[4]=='0' && a[7]=='0') || (a[2]=='0' && a[5]=='0' && a[8]=='0') || (a[0]=='0' && a[4]=='0' && a[8]=='0') || (a[2]=='0' && a[4]=='0' && a[6]=='0'))
    {
        return 200;
    }
    else
    {
        return 300;
    }
    
    
 }
  void main()
 {
    char a[9]={'1','2','3','4','5','6','7','8','9'};
    int k;
    gamename();
    show(a);
    symbol();
    start();
    play(a);

    label:
    show(a);
    play(a);
    k=end(a);
    if(count<9)
    {
    if (k==100)
    {
        printf("Player 1 win");
    }
    else if (k==200)
    {
        printf("Player 2 win");
    }
    else
    {
        goto label;
    }
    }
    else
    {
        printf("Game Draw:");
    }
    
 } 