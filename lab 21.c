// Create a structure time(hour, minute, second) then create two time
//variables t1(1,40,30) and t2(2,30,50) and then them bys stroring sum on time t3
#include<stdio.h>
struct time
{
int hour;
int minute;
int second;
};
void sum(struct time t1, struct time t2);
int main()
{
struct time t1 = {1,30,50};
struct time t2 = {3,40,50};
sum(t1,t2);
}
void sum(struct time t1, struct time t2)
{
struct time temp;
temp.second = t1.second+t2.second;
temp.minute = t1.minute+t2.minute;
temp.hour = t1.hour+t2.hour;
while(temp.second>=60)
{
temp.second = temp.second-60;
temp.minute = temp.minute+1;
}
while(temp.minute>=60)
{
temp.minute = temp.minute-60;
temp.hour = temp.hour+1;
}
printf("Total time: %d:%d:%d",temp.hour,temp.minute,temp.second);
}