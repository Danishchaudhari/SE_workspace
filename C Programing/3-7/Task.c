#include<stdio.h>
#include<conio.h>
#include<string.h>

struct address
{
    char city[50];
    int zip;
}a1;

struct student
{
    char name[50];
    int age;
    struct address add;
}s1[100];

int main()

{
 
 int n;
 
 printf("Enter Total Number Of Student: ");
 scanf("%d",&n);
 
    for(int i=0;i<n;i++)
    {
        printf(" Enter Name: ");
       scanf("%s", s1[i].name);
        
         printf(" Enter Age: ");
        scanf(" %d",&s1[i].age);
        
         printf(" Enter City: ");
        scanf("%s", s1[i].add.city);
        
         printf(" Enter Zip: ");
        scanf(" %d",&s1[i].add.zip);
    }
 
    for(int i=0;i<n;i++)
    {
        printf("\n Your Name Is : %s",s1[i].name);
        printf("\n Your Age Is : %d",s1[i].age);
        printf("\n Your City Is : %s",s1[i].add.city);
        printf("\n Your Zip Is : %d",s1[i].add.zip);
        
        printf("\n");
    }
    
    getch();
}