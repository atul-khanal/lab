//lab 8: write a c programthar reads a number and finds sum of cubes of digits
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
        s=s+d*d*d;
        n = n/10;
    }
    printf("the sum of cubes of digits of %d =%d\n",m,s);
}
//enter any number
//123
//the sum of cubes of digits of 123 =36