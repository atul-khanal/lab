#include <stdio.h>
#include <math.h>
int reverse(int n,int r);
int main()
{
    int n;  
    printf("Enter any number\n ");
    scanf("%d", &n);
    printf("Reverse of %d = %d", n, reverse(n,0));
}
int reverse(int n,int r)
{
    if(n == 0)
        return r;
    else 
    return reverse(n/10,r*10+n%10);
}