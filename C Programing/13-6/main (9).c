#include<stdio.h>
#include<conio.h>
void main()
{
    
    //I=PRN/100;
    
    float intrest,pri=50000,roi=7.5,n=5,total;
    
    intrest = pri*roi*n/100;
    
    printf("\n Intrest is %f",intrest);
    
    total = pri+intrest;
    
     printf("\n Total Amount is %f",total);
  
    
    getch();
}    
