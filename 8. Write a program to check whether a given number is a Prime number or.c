//8. Write a program to check whether a given number is a Prime number or not
#include<stdio.h>
#include<conio.h>
 int main()
 {
     int n,i,flag=0;
     printf("Enter a Number\n");
     scanf("%d",&n);
     for(i=2;i<n;i++)
      if(n%2==0)
      {
          flag==1;
          break;
      }
      if(flag==1)
        printf("NOT PRIME");
       else
        printf("PRIME");
        return 0;
 }
