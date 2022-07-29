//7. Write a program to count digits in a given number
#include<stdio.h>
#include<conio.h>
 int main()
 {
     int n,i=0;
     printf("Enter the value of n\n");
     scanf("%d",&n);
     while(n!=0)
     {
     n=n/10;
     i++;
     }
     printf("No. of digit is %d",i);
     return 0;
 }
