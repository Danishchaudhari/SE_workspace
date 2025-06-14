#include<stdio.h>
#include<conio.h>
void main()
{
    //pnr/100;
    
    float intrest,pri=60000,roi=6.5,n=5,total;
 
   intrest=pri*roi*n/100;
   
   printf("\nintrest is : %f",intrest);
   total = pri+intrest;
    
     printf("\n Total Amount is %f",total);
 
 
    
    getch();
}    