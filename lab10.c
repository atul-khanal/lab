// lab 9: write a c program that prints prime number from 200 to 500
#include <stdio.h>
int main()
{
    int i,j,k,l,m;
    printf("prime numbers from 200 to 500\n");
    k=0;
    for(i=200;i<=500;i++)
    {
        m=i;
        l=0;
        if(m%2==0)
        continue;
        for(j=1;j<=m;j++)
        {
            if(m%j==0)
            l=l+1;
            k=k+1;
        }
        if(l==2)
        printf("%d, ",m);  
    }
    printf("\nthe number of iteration is %d\n",k);
}