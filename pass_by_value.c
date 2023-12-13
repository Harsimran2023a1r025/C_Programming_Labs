#include<stdio.h>
void swap(int,int);
void main()
{
    int a,b;
    printf("Enter the value of a and b\n");
    scanf("%d %d",&a,&b);
    printf("Before swapping %d %d\n",a,b);
    swap(a,b);
    printf("%d %d\n",a,b);
}
void swap(int x, int y)
{
    int t;
    t=x;
    x=y;
    y=t;
    printf("%d %d\n",x,y);
}