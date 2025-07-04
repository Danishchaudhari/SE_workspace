#include<stdio.h>
#include<conio.h>
  void main()
  {
  
  int maths,sci,guj,hin,eng,total,avg;
  
  printf("Enter Marks for Maths:");
  scanf("%d",&maths);
  printf("Enter Marks for sci:");
  scanf("%d",&sci);
  printf("Enter Marks for guj:");
  scanf("%d",&guj);
  printf("Enter Marks for hin:");
  scanf("%d",&hin);
  printf("Enter Marks for eng:");
  scanf("%d",&eng);
  
  
  total=maths+sci+guj+hin+eng;
  
  avg=total/5;
  
  printf("Your Percentage is:%d",avg);
 
    
      
  getch();
  }