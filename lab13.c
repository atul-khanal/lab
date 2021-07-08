//lab 12 : write a c program to searches key element 
#define N 10
#include <stdio.h>
int main()
{
    int x[N] ={10,20,30,40,50,38,25,48,23,22};
    int key;
    printf ("enter number to search :");
    scanf("%d",&key);
    int i,t=0;
    for(i=0;i<N;i++)
    {
        if (key==x[i])
        {
            t=1;
            break;
        }
    }
    if(t==1)
    printf("key found\n");
    else 
    printf("key not found\n");
    return 0;
}
