#include <stdio.h>
int main()
{
    int n;
    printf("Enter the limit\n");//to put the limit of array
    scanf("%d", &n);
    int a[n];//AN array if n = 3
    printf("Enter the elements \n");
    for (int i = 0; i < n; i++)//0<=3 
    
        scanf("%d", &a[i]);//a[0]=11,a[1]=12,a[2]=13
        int pos,ele,flag=0;
        printf("Enter the element to search \n");
        scanf("%d", &ele);
        

        for (int j = 0; j <n; j++)
        {
            if(a[j]==ele)
            {
                flag=1;
                pos=j+1;
                break;
            }
        }
        if(flag==1)
        {
            printf("Element found at pos %d",pos);
        }
        else{
            printf("Element not found\n");
        }
        return 0;
}