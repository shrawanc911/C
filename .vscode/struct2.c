#include<stdio.h>
#include<string.h>
struct student
{
    char name[10];
    int rollno;
    float percentage;    
    char grade[5];
}s[5];
int main()
{
    for(int i=0;i<5;i++)
    {
        printf("Enter %d student name:",i+1);
        scanf("%s",&s[i].name);
        printf("Enter %d student roll no :",i+1);
        scanf("%d",&s[i].rollno);
        printf("Enter %d student percentage:",i+1);
        scanf("%f",&s[i].percentage);
        printf("Enter %d student grade:",i+1);
        scanf("%s",&s[i].grade);
    }
    for(int i=0;i<5;i++)
    {
        printf("Name = %s\n",s[i].name);
        printf("Roll no = %d\n",s[i].rollno);
        printf("Percentage = %f\n",s[i].percentage);
        printf("Grade = %s\n",s[i].grade);
    }
    return 0;
}
