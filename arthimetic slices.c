#include<stdio.h>
int fun(int a[],int n)
{
    if(n < 3)
    return 0;
    int c=0,s=0;
    for(int i=2;i<n;i++)
    {
        if(a[i]-a[i-1] == a[i-1]-a[i-2])
        {
            c++;
            s += c;
        }
        else
        c = 0;
    }
    return s;
}
void main()
{
    int a[10],n;
    printf("Enter size of the array : ");
    scanf("%d",&n);
    printf("Enter array elements : ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("number of arthimetic slices : %d",fun(a,n));
}