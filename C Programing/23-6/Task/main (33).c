#include<stdio.h>
#include<conio.h>

void main()
{
    
    int num,fac=1;
    
    printf("Enter Your Number : ");
    scanf("%d",&num);
    
    if(num<0)
    {
        printf("\n Factorial is not defined");
        
    }
    else
    {
        for(int i=1;i<=num;i++)
        {
            fac *= i;
        }
    
        printf("\n Factorial of %d is %d", num,fac);
    }
    
    getch();
}