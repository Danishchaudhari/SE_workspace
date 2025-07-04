#include<stdio.h>
#include<conio.h>
 void main()
 {
     int num;
     
     printf("Enter Your Number");
     scanf("%d",&num);
 
    if(num>0)
    {
       printf("Number is positive"); 
    }
    else 
    {
       printf("Number is Negative"); 
    }
 
 
    getch();
 }