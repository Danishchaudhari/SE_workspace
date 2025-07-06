#include <stdio.h>
#include <conio.h>
int main() 
{
    int a, b, c;

    
    printf("\n Enter three numbers:");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
            printf("Maximum is: %d", a);
        else
            printf("Maximum is: %d", c);
    }    
     else 
    {
        if (b > c)
            printf("Maximum is: %d", b);
        else
            printf("Maximum is: %d", c);
    }

   getch();
}
