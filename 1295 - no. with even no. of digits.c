#include<stdio.h>
int sum(int a[],int n,int d,int c)
{
    if(n<0)
    return c;
    while(a[n] != 0)
    {
        a[n] = a[n]/10;
        d++;
    }
    if(d%2==0)
    c++;
    return sum(a,n-1,0,c);

}
void main()
{
    int n,a[10],b[10];
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter the array elements : ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("%d\n",sum(a,n-1,0,0));
}