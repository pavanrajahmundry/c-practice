#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float a,b,c,D,r1,r2;
printf("enter a,b,c value;");
scanf("%f%f%f",&a,&b,&c);
D=(b*b)-(4*a*c);
{if(D>0)
printf("roots are different");
r1=(-b+sqaureroot (D))/2*a
r2=(-b-sqaureroot (D))/2*a
printf("root1=%fand root2=%f",r1,r2);
}
if(D==0)
{
printf("roots are equal");
r1=r2=-b/(2*a);
printf("root1=root2=%f",r1,r2);
}
else
{
printf("roots are imaginary");
}
getch();
}
