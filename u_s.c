#include<stdio.h>
struct record{
        int register_number;
        char name[20];
        int cgpa;
}r;
union student{
        int register_number;
        char name[20];
        int cgpa;
}s;

void main()
{
        struct record r;
	union student s;
        int i;
	printf("Enter reg_no,name,cgpa of student for structure:");
        scanf("%d%s%d",&r.register_number,r.name,&r.cgpa);
        printf("STUDENT DATA:");
	printf("\nRegister Number:%d \nName:%s \nCGPA:%d",r.register_number,r.name,r.cgpa);
        printf("Enter reg_no,name,cgpa of student for union:");
        scanf("%d%s%d",&s.register_number,s.name,&s.cgpa);
        printf("STUDENT DATA:");
        printf("\nRegister Number:%d \nName:%s \nCGPA:%d",s.register_number,s.name,s.cgpa);
}

