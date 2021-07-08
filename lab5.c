//lab 5: write a c program that reads a number and finds sum of digits
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
        s=s+d;
        n = n/10;
    }
    printf("the sum of digits of %d =%d\n",m,s);
}
// enter any number
// 12345
// the sum of digits of 12345 =15