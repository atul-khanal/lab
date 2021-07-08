//write a c program that reads a number and finds its reverse using function
#include<stdio.h>
int main()
{
    int n;
    printf("enter any number : ");
    scanf("%d",&n);
    print("the reverse of %d",n,reverse(n));

}
int reverese(int n)
{
    int d,r=0;
    while(n>0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10
    }
    return r;
}