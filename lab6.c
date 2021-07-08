// lab:6 write a c program that reads and finds its reverse..(123...>321)
#include<stdio.h>
int main()
{
    int n,m,d,s=0;
    printf("enter any number\n");
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        d =n%10;
        s=s*10+d;
        n = n/10;
    }
    printf("the reverse of digits of %d =%d\n",m,s);
}
//enter any number
//453
//the reverse of digits of 453 =354