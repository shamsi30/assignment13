#include<stdio.h>
int sodd(int);
int main()
{
    int n,y;
    printf("Enter a number:");
    scanf("%d",&n);
    y=sodd(n);
    printf("Sum of first %d odd numbers are %d",n,y);
    return 0;
}
int sum;
int sodd(int n)
{
    if(n==0)
        return 0;
    sodd(n-1);    
    if(n%2!=0)        
        sum=n+sodd(n-1);   
    return sum; 
}