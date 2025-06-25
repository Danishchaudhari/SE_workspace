#include<stdio.h>
#include<conio.h>
 void main()
 {  
  
    int i, j, spaces, num;
     
     printf("Enter your num");
     scanf("%d",&num);

    for(i = 1; i <= num; i++)  
    {
        
        for(j = 1; j <= num - i; j++) 
        {
            printf(" ");
        }
        
        for(j = 1; j <= i; j++) 
        {
            printf("%d",j);
        }
        printf("\n");
    }

     getch();
     
 }