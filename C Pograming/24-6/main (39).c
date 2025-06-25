#include<stdio.h>
#include<conio.h>
 void main()
 {  
       int i,j,num;
    
    printf("Enter Any Number");
    scanf("%d",&num);
    
    for(i=0;i<=num;i++)
    {
        for(j=0;j<=i;j++)
        {
           printf("%c",'A'+i); 
        }
        printf("\n");
         
    }

     getch();
     
 }