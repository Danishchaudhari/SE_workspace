#include<stdio.h>
#include<conio.h>
 void main()
 {
     
    int age; 
     
     printf("enter your age");
     scanf("%d",&age);
     
     if(age>18)
     {
        printf("Eligible to vote");
     }
     else
     {
       printf("not Eligible to vote");     
     }
     
     getch();
 }
 