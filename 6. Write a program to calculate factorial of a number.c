//6. Write a program to calculate factorial of a number
#include<stdio.h>
int main()
{
    int i,n,k=1;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        k=k*i;
        printf("%d",k);
    return 0;
}
