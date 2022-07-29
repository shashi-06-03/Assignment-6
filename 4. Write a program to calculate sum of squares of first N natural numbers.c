//4. Write a program to calculate sum of squares of first N natural numbers
#include<stdio.h>
int main()
{
    int i,n,k=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        k=k+(i*i);
    }
    printf("%d",k);
    return 0;
}
