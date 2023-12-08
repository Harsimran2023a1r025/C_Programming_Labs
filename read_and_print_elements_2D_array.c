#include<stdio.h>
void main()
{
    int rows,columns;
    printf("Enter the number of rows\n");
    scanf("%d",&rows);
    printf("Enter the number of columns\n");
    scanf("%d",&columns);
    int a[rows][columns],i,j;
    printf("Enter elements of 2D array\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Elements of 2D array are \n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}