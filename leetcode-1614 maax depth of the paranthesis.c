#include<stdio.h>
void main()
{
    char a[100];
    int d=0,m=0,i=0;
    printf("Enter the string : ");
    scanf("%s",a);
    while(a[i] != '\0')
    {
        if(a[i] == '(')
        {
            d += 1;
            if(m < d)
            {
                m = d;
            }
        }
        else if(a[i] == ')')
        {
            d -= 1;
        }
        i++;
    }
    printf("%d\n",m);
}