#include<stdio.h>
#include<conio.h>
 void main()
 {
    
    int num;
    
    printf("\n enter your number : \n press 1 for english \n press 2 for hindi \n press 3 for gujrati");
    scanf("\n %d",&num);
    
    switch(num)
    {
        case 1: 
        printf("Your Selected Language is English");
        break;
        
        case 2: 
        printf("Your Selected Language is hindi");
        break;
        
        case 3: 
        printf("Your Selected Language is gujrati");
        break;
        
        default: 
        printf("Your number Is Not Valid");
        break;
        
    }
    
    getch();
 }