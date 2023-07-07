#include<stdio.h>
#include<string.h>
#include<math.h>
struct student
{
    char name[10];
    int rollno;
    float percentage;    
    char grade[5];
}s[5];
int main()
{
   float marks,b;
    for(int i=0;i<1;i++)
    {
        printf("Enter %d student name:",i+1);
        scanf("%s",&s[i].name);
        printf("Enter %d student roll no :",i+1);
        scanf("%d",&s[i].rollno);
        printf("Enter %d student marks:",i+1);
        scanf("%d",&marks);
        b=(float)marks/100;
        s[i].percentage=b;
        if(s[i].percentage>90)
        {
            strcpy(s[i].grade,"A");
        }
        else
        {
            strcpy(s[i].grade,"B");
        }
    }
    for(int i=0;i<1;i++)
    {
        printf("Name = %s\n",s[i].name);
        printf("Roll no = %d\n",s[i].rollno);
        printf("Percentage = %f\n",s[i].percentage);
        printf("Grade = %s\n",s[i].grade);
    }
    return 0;
}
