#include<stdio.h>
int expand(int l,int r,char a[])
{
    int c=0;
    
        while(l >= 0 && a[r] != '\0' && a[l] == a[r])
        {
            c++;
            l--;
            r++;
        }
    
    return c;
}
void main()
{
    int count = 0;
    char a[100];
    printf("Enter the string : ");
    scanf("%s",a);
    for(int i=0;a[i] != '\0';i++)
    {
        count += expand(i,i,a);
        count += expand(i,i+1,a);
    }
    printf("%d\n",count);
}