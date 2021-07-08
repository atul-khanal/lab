//write a c program that prints first 30 fibonacci number using user defined function
#include<stdio.h>
int fibo(int n);
int main()
{
    printf("ifrst 30 fibonacci number\n");
    for(int i=1;i<=30;i++)
    {
        priintf("%d",fibo(i));
    }
}
int fibo(int n)
{
    if(n<=1)
    return n;
    else 
    return fibo(n-1)+fibo(n-2);
}