#include<stdio.h>
#include<conio.h>
 void main()
 {
    
    int marks;
        printf("enter your marks");
        scanf("%d",&marks);
   
      if(marks>70)
      {
          printf("A grade");
      }
     else if(marks>60)
     {
          printf("B grade");
     }
    else if(marks>50)
     {
          printf("c grade");
     }
    else if(marks>40)
     {
          printf("D grade");
     }
     else
     {
          printf("fail");
     }
   
    
    getch();
 }