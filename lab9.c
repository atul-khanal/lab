//lab 9: write a c programthar reads a number and finds sum of cubes of digits
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
    if(m==s)
    printf("it is amstrong number\n");
    else 
    printf("it is not amstrong number\n");
}
//enter any number
//153
//it is amstrong number

//enter any number
//1234
//it is not amstrong number