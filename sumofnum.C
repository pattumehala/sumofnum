#include<stdio.h>
int main()
{
int a[10],n,i,sum=0;
printf("\nEnter the range:");
scanf("%d",&n);
printf("\nEnter the number:");
for(i=0;i<n;i++)
{
scanf("%d\t",&a[i]);
sum=sum+a[i];
}
printf("\nSum of the number is:%d",sum);
return 0;
}

