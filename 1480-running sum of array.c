#include<stdio.h>
void sum(int a[],int n,int i)
{
    if(n<=1)
    return;
    a[i] += a[i-1];
    return sum(a, n-1,i+1);
}
void main()
{
    int n,a[10];
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter the array elements : ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    sum(a,n,1);
    for(int i =0;i<n;i++)
    printf("%d ",a[i]);
}