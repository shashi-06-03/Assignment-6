//10. Write a program to reverse a given number
#include<stdio.h>
int main()
{
    int n, i,remainder,reverse=0;
    printf("Enter a Number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        remainder=n%10;
        n=n/10;
        reverse=reverse*10+remainder;
    }
    printf("REVERSE is %d",reverse);
    return 0;
}
