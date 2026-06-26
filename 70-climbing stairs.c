#include<stdio.h>
void main()
{
    int a,c=0,p=1,r=2;
    printf("Enter a number : ");
    scanf("%d",&a);
    if(a<=2)
    printf("%d\n",a);
    else
    {
        for(int i = 3;i<=a;i++)
        {
            c = p+r;
            p = r;
            r = c;
        }
        printf("%d\n",r);
    }
}