// lab 4: write a c program that reads a number and tests whether 
// it is prime or composite
#include<stdio.h>
int main()
{
    int n,c=0,i=1;
    printf("enter any number\n");
    scanf("%d",&n);
    while(i<=n)
    {
        if(n%i==0)
        c=c+1;
        i=i+1;

    }
    if (n==1)
    printf("the number is nither prime nor composite\n");
    else if(c==2)
    printf("number is prime\n");
    else
    printf("number is composite\n");
}
// enter any number 
// 23
// number is prime