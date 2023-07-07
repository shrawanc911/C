#include<stdio.h>
#include<string.h>
struct student
{
    char name[10];
    int rollno;
    float percentage;    
    char grade[2];
};
int main()
{
    struct student std1,std2,std3,std4;
    printf("Student 1\n");
    strcpy(std1.name,"Arth");
    std1.rollno=100;
    std1.percentage=86.35;
    strcpy(std1.grade,"+A");
    printf("%s\n",std1.name);
    printf("%d\n",std1.rollno);
    printf("%f\n",std1.percentage);
    printf("%s\n",std1.grade);

    printf("Student 2\n");
    strcpy(std2.name,"Bhavesh");
    std2.rollno=101;
    std2.percentage=65.29;
    strcpy(std2.grade,"B");
    printf("%s\n",std2.name);
    printf("%d\n",std2.rollno);
    printf("%f\n",std2.percentage);
    printf("%s\n",std2.grade);

    printf("Student 3\n");
    strcpy(std3.name,"Vivek");
    std3.rollno=102;
    std3.percentage=79.51;
    strcpy(std3.grade,"A");
    printf("%s\n",std3.name);
    printf("%d\n",std3.rollno);
    printf("%f\n",std3.percentage);
    printf("%s\n",std3.grade);

    printf("Student 4\n");
    strcpy(std4.name,"Vandan");
    std4.rollno=103;
    std4.percentage=94.65;
    strcpy(std4.grade,"+A");
    printf("%s\n",std4.name);
    printf("%d\n",std4.rollno);
    printf("%f\n",std4.percentage);
    printf("%s\n",std4.grade);    
    // printf("%d",sizeof(struct student));
    return 0;
}