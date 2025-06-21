#include<stdio.h>
#include<conio.h>

    void main()
    {
     
     int choice;
     int num1,num2,result;
     
     printf("---------Calculater---------");
     printf("\n 1. Addition");
     printf("\n 2. Subtraction");
     printf("\n 3. Multiplication");
     printf("\n 4. Division");
     printf("\n Enter Your Choice(1-4) : ");
     scanf("%d",&choice);
     
     printf("Enter Your First Number : ");
     scanf("%d",&num1);
     
     printf("Enter Your Second Number : ");
     scanf("%d",&num2);
     
     switch(choice)
     {
         case 1:
         result=num1+num2;
         printf("\n result = %d",result);
         break;
         
         case 2:
         result=num1-num2;
         printf("\n result = %d",result);
         break;
         
         case 3:
         result=num1*num2;
         printf("\n result = %d",result);
         break;
         
         case 4:
         result=num1/num2;
         printf("\n result = %d",result);
         break;
         
         default: printf("\n Invalid Choice Please Select Between 1 to 4");
         break;
         
     }
     
      
       
      getch();
        
    }