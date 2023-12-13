#include<stdio.h>
int swap(int*,int*);
int main()
{
    int a=10,b=20;
    printf("a=%d,b=%d\n",a,b);
    swap(&a,&b);
    printf("After swapping\n");
    printf("%d %d\n",a,b);
}
int swap(int *x, int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
    printf("After swapping\n");
    printf("%d %d\n",x,y);
}