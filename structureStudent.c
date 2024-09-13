#include <stdio.h>
struct student
{
    int register_number;
    char name[20];
    float cgpa;
}student[5];
int main()
{
    struct student;
    int i;
    printf("Enter 5 student data:");
    for(i=0;i<5;i++)
    {
        printf("\nSTUDENT %d",i+1);
        printf("\nEnter Register Number: ");
        scanf("%d",&student[i].register_number);
        printf("\nEnter Name:");
        scanf("%s",student[i].name);
        printf("\nEnter cgpa:");
        scanf("%f",&student[i].cgpa);
    }
    printf("Student data:");
    for(i=0;i<5;i++)
    {
        printf("\nStudent %d",i+1);
        printf("\nRegister number:%d",student[i].register_number);
        printf("\nName:%s",student[i].name);
        printf("\nCGPA:%f",student[i].cgpa);
    }
    return 0;
}
