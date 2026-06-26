#include<stdio.h>
#include<stdlib.h>
void main()
{
    char a[10];
    int i=0,d=0;
    printf("Enter the string : ");
    scanf("%s",a);
    while(a[i] != '\0')
    {
        if(a[i] == '(')
        {
            d++;
        }
        else if(a[i] == ')')
        {
            d--;
        }
        i++;
    }
    printf("%d\n",abs(d));
}