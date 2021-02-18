#include<stdio.h>
#include<conio.h>
void main()
{
int num,temp,count=0,cnt,sum=0,pow,rem=0;
clrscr();
printf("enter number to check=");
scanf("%d",&num);
temp=num;
while(num>0)
{
num=num/10;
count++;
}
printf("count of digits=%d",count);
cnt=count;
num=temp;
while(num>0)
{
rem=num%10;
pow=1;
while(count>0)
{
pow=pow*rem;
count--;
}
num=num/10;
sum=sum+pow;
count=cnt;
}
printf("\n%d is sum",sum);
num=temp;
if(sum==num)
{
printf("\n%d is armstrong number",num);
}
else
{
printf("\n%d is not armstrong number",num);
}
getch();
}