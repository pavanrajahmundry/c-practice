#include<stdio.h>
#include<conio.h>
void main()
{
int num,sum;
clrscr();
printf("enter the number");
scanf("%d",&num);
sum=0;
 do {
  sum+=num%10;
  num/=10;
 printf("%d\n",sum);
 }while (num>0);
 printf("the sum is=%d\n",sum);
}
