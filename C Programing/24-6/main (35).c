#include<stdio.h>
#include<conio.h>
 void main()
 {
        int i,j,num;
       
    printf("Enter Any Number");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
         
    }

     
     
     
     getch();
     
 }