#include<stdio.h>
void bubblesort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
    for(j=0;j<n-i-1;j++)
    {
    if(a[j]>a[j+1])
        {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
        }
    }
    }
}
void printarray(int a[],int size)
{
    int i;
    for(i=0;i<size;i++)
    printf("%d ",a[i]);
}
    int main()
    {
    int a[20],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    bubblesort(a ,n);
    printf("sorted array ");
    printarray(a ,n);
    }
    void binary(int a[20],int se)
    {
        int n,i,lb,ub,mid,t=0;
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
    
