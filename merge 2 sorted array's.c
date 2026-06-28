#include<stdio.h>

void main()
{
    int n;
    printf("Enter size of arrays: ");
    scanf("%d",&n);

    int a[n], b[n], c[2*n];

    printf("Enter array 1 elements: ");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter array 2 elements: ");
    for(int i=0;i<n;i++)
        scanf("%d",&b[i]);

    int i=0, j=0, k=0;

    while(i<n && j<n)
    {
        if(a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while(i<n)
        c[k++] = a[i++];

    while(j<n)
        c[k++] = b[j++];

    printf("Merged array: ");

    for(i=0;i<2*n;i++)
        printf("%d ", c[i]);
}