// lab:7 write a c program that reads a nimber and finds whwther it is palindrome or not...
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
    if (s==m) 
    printf("the number is palindrome\n");
    else
    printf("the numner is not palondrome\n");
}
//enter any number
//123321
//the number is palindrome

//enter any number
//321
//the numner is not palondrome