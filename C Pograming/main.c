#include<stdio.h>
#include<conio.h>
  void main()
  {
      int i,p,r,n;
      
      printf("\n enter pri");
      scanf("%d",&p);
      printf("\n enter rate of Intrest");
      scanf("%d",&r);
      printf("\nenter years");
      scanf("%d",&n);
      
      i=p*r*n/100;
      
      printf("Intrest is: %d",i);
    
    
      
  getch();
  }