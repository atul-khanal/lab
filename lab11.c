// lab 11: write a c program that reads coefficients of quadratic equation and 
// finds root of equation
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,r1,r2;
    printf("enter coefficients a, b, c");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d<0)
    {
        printf("no real roots\n");
    }
    else
    {
        d  = sqrt(d);
        r1 =(-b+d)/(2*a);
        r2 =(-b-d)/(2*a);
        printf("root1= %0.2f\n",r1);
        printf("root2= %0.2f\n",r2);
    }
    return 0;
}