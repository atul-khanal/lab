//Lab24: Write a C program that reads rollno, name and marks in 5 subs of 10 students
//and then compute total marks of each student and display of details of those
//whose total marks is greater than 300
#include<stdio.h>
#define N 2
struct subject
{
int c;
int phy;
int dl;
int math;
int iit;
};
struct student
{
int rn;
char name[20];
struct subject marks;
int total;
};
void read(struct student s[]);
void display(struct student s[]);
int main()
{
struct student s[N];
read(s);
display(s);
}
void read(struct student s[])
{
int i;
printf("Enter rollno, name and marks in (c,dl,phy,math,iit)of %d students\n",N);
for(i=0;i<N;i++)
{
scanf("%d%s",&s[i].rn,s[i].name);
scanf("%d%d%d%d%d",&s[i].marks.c,&s[i].marks.phy,&s[i].marks.dl,&s[i].marks.math,&s[i].marks.iit);
s[i].total = s[i].marks.c+s[i].marks.dl+s[i].marks.phy+s[i].marks.math+s[i].marks.iit;

 }
}
void display(struct student s[])
{
printf("Rollno\tName\tTotal Marks\n");
for(int i=0;i<N;i++)
{
if(s[i].total>=300)
printf("%d\t%s\t%d\n",s[i].rn,s[i].name,s[i].total);
}
}