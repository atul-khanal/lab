// lab 14 :write a c program that reads 10 number and finds the sum of square of all
//number of elements
#include <stdio.h>
#define N 10
int main()
{
    int i,l,a[N],j=0;
    printf("Enter %d numbers:\n", N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<N;i++)
    {
        j=j+a[i]*a[i];
    }
    printf("the sum of of square is %d ",j);
}
/*
Enter 10 numbers:
1
2
3
4
5
6
7
8
9
10
the sum of of square is 385 */


