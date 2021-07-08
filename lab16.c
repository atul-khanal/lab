/*lab 15: Write a C program that reads 10 numbers and find frequency of each element
1 1 2 1 3 4 5 2 5 1:
frequency of 1 = 4
frquency of 2 = 2
frequency of 3  = 1
frequency of 4 = 1
freuencefy 5 =  2 */
#include<stdio.h>
#define N 10
int main()
{
     int a[N] = {1,1,2,1,3,4,5,2,5,1};
     int frq[N],i,j,count;
     for(i=0;i<N;i++)
     frq[i]=-1;
     
     for(i=0;i<N;i++)
     {
          count =1;
          for(j=i+1;j<N;j++)
          {
              if(a[i]==a[j])
              {
                 count = count+1;
               a[j]=0;         
             }
          }
          if(a[i]!=0)
          frq[i]=count;
     }
     for(i=0;i<N;i++)
     {
         if(a[i]!=0)
         printf("frequency of %d= %d\n",a[i],frq[i]);
     }     
}
/* OUTPUT
frequency of 1= 4
frequency of 2= 2
frequency of 3= 1
frequency of 4= 1
frequency of 5= 2 */