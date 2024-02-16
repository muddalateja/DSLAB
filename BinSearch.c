#include<stdio.h>
int main()
{
	int a[20],i,n,mid,se,lb,ub,t=0;
	printf("enter array size:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter searching element:");
scanf("%d",&se);
for(i=0;i<n;i++)
lb=0;
ub=n-1;
while(lb<=ub)
{
mid=(lb+ub)/2;
if(se==a[mid])
{
printf("searching element is found at location %d",mid+1);
t=1;
break;
}
else
if(se>a[mid])
lb=mid+1;
else
ub=mid-1;
}
if(t==0)
printf("searching element is not found");
}
