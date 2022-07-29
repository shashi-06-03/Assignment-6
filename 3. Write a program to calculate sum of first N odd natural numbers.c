//3. Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
 int main()
 {
     int n,i,k=0;
     printf("Enter the value of n\n");
     scanf("%d",&n);
     for(i=1;i<=n*2;i+=2)
        k=k+i;
     printf("%d",k);
     return 0;
 }
