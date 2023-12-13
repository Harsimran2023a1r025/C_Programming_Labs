#include<stdio.h>
struct student
{
    char name[50];
    int roll;
    int sub1;
    int sub2;
    int sub3;
};
int total_marks(struct student s)
{
    return s.sub1+s.sub2+s.sub3;
}
void display(struct student s)

    {
        printf("Enter the details of students \n");
        printf("Name: %s, ",s.name);
        printf("Roll: %d, ",s.roll);
        printf("Marks of subject 1: %d, ",s.sub1);
        printf("Marks of subject 2: %d, ",s.sub2);
        printf("Marks of subject 3: %d, ",s.sub3);
        printf("Total marks is: %d\n",total_marks(s));
    }
    int main()
    {
        struct student s[3];
        for(int i=0;i<3;i++)
        {
        printf("Enter the details of students %d\n",i+1);
        printf("Name: ");
        scanf("%s",&s[i].name);
        printf("Roll: ");
        scanf("%d",&s[i].roll);
        printf("Marks of subject 1: ");
        scanf("%d",&s[i].sub1);
        printf("Marks of subject 2: ");
        scanf("%d",&s[i].sub2);
        printf("Marks of subject 3: ");
        scanf("%d",&s[i].sub3);
        }
        for(int i=0;i<3;i++)
        {
            display(s[i]);
        }
    }
