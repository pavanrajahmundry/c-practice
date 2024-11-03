#include<stdio.h>
#include<conio.h>
void main(){
int n;
clrscr();
printf("Enter which table do you want?");
scanf("%d",&n);
int i;
for(i=1;i<=10;i++){
      printf("\n");
      printf("%d x %d = %d\n",n,i,n*i);
}
}