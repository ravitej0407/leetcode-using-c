#include<stdio.h>
void sum(int a[],int n,int i,int b[])
{
    if(i==n)
    return;
    b[i] = a[a[i]];
    return sum(a,n,i+1,b);
}
void main()
{
    int n,a[10],b[10];
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter the array elements : ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    sum(a,n,0,b);
    for(int i=0;i<n;i++)
    printf("%d ",b[i]);
}