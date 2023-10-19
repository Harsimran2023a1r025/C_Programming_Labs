//find area and perimeter of circle ,square and rectangle based on user choice 

#include<stdio.h>
int main()
{
    int choice;
    float radius,length,breadth,side;
    float area,perimeter;

    printf("enter the shape you want area and perimeter of \n");
    printf("1-circle\n");
    printf("2-square\n");
    printf("3-rectangle\n");
    printf("Enter your choice 1,2,3\n");
    scanf("%d",&choice);
    
    if(choice==1)
    {
        printf("Enter the radius of circle\n");
        scanf("%f",&radius);
        area=3.14*radius*radius;
        perimeter=2*3.14*radius;
        printf("The area is %.2f\n",area);
        printf("the perimeter is %.2f\n",perimeter);
    }
    else if(choice==2)
    {
        printf("enter the side of square\n");
        scanf("%f",&side);
        area=side*side;
        perimeter=4*side;
        printf("The area is %.2f\n",area);
        printf("the perimeter is %.2f\n",perimeter);
    }
    else if(choice==4)
    {
        printf("Enter the length and breadth of rectangle \n");
        scanf("%f%f",&length,&breadth);
        area=length*breadth;
        perimeter=2*(length+breadth);
        printf("The area is %.2f\n",area);
        printf("the perimeter is %.2f\n",perimeter);        
    }
    else
    {
        printf("Invalid choice\n");
    }

    return 0;

}