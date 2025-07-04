#include<stdio.h>
#include<conio.h>

void main()

{
    int num, n1 = 0, n2 = 1, n3;
    
    printf("Enter a number to print Fibonacci series : ");
    scanf("%d", &num);
    
    printf("\n Fibonacci series:\n %d \n %d",n1,n2);
    
    n3 = n1 + n2;
    
    while(n3<=num)
    {
        printf("\n %d",n3);
        n1 = n2;
        n2 = n3;
        n3 = n1 + n2;
    }
    
    getch();
}