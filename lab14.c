//lab 13: write a program that check if the aray contains dupliate number
#include<stdio.h>
#define n 10
int main()
{
	int x[10]={20,20,110,30,70,22,38,67,54,121};
	int i ,t=0,j,a;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(x[i]==x[j])
			{
				t=1;
				a=x[i];
				break;
			}
		}
	}
	if(t==1)
	printf("array contains duplicate element %d\n",a);
	else
	printf("array does not contain duplicate elements\n");
	return 0;
}