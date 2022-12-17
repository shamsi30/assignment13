#include<stdio.h>
int even(int);
int main()
{
    int n,x;
    printf("Enter a number:");
    scanf("%d",&n);
    x=even(n);
    printf("Sum of first %d even numbers are %d",n,x);
    return 0;
}
int sum;
int even(int n)
{
    if(n==1)
        return 0;
    even(n-1);
    if(n%2==0)
        sum=n+even(n-1);
    return sum; 
}