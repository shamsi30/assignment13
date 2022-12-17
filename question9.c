#include<stdio.h>
int find(int);
int main()
{
    int n,x;
    printf("Enter two or more than two digits number:");
    scanf("%d",&n);
    x=find(n);
    printf("%d in total digits are %d",n,x);
    return 0;
}
int count=0;
int find(int n)
{
    if(n==0)
        return 0;
    find(n/10);
    count++;
    return count;
}