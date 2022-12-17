#include<stdio.h>
int fact(int);
int main()
{
    int n,x;
    printf("Enter a number:");
    scanf("%d",&n);
    x=fact(n);
    printf("Factorial of %d is %d",n,x);
    return 0;
}

int fact(int n)
{
    if(n==1)
        return 1;
    fact(n-1);
    return n*fact(n-1);
}
