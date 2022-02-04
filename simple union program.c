#include<stdio.h>

union student
{
    int rollno;
    char name[30];
    
};

int main()
{
    union student s1; 
    printf("%ld\n",sizeof(s1));
   scanf("%d",&s1.rollno);
   printf("%d\n",s1.rollno);
   scanf("%s",s1.name);
   printf("%s",s1.name);
    return 0;
}
