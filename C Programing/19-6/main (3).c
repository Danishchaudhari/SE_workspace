#include<stdio.h>
#include<conio.h>
 void main()
 {
    
    int num;
    
    printf("enter your number : ");
    scanf("%d",&num);
    
    if(num%2==0)
    {
        printf("number is even");
    }
    
    else
    {
        printf("number is odd");
    }
    
    
    getch();
 }