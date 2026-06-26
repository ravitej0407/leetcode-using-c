#include<stdio.h>
int stairs(int n)
{
    if(n<=0)
    return 0;
    if(n == 1)
    return 1;
    if(n%3 == 0)
    return stairs(n/3);
    
    return 0;
}
void main()
{
    int i;
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    i = stairs(a);
    if( i == 1)
    printf("True\n");
    else
    printf("False\n");
}