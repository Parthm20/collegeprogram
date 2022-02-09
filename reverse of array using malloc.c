#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*ptr;
    printf("enter number of element:\n");
    scanf("%d",&n);
    ptr=(int*)malloc(sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
    printf("array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }
    printf("\narray in reverse order is:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",*(ptr+i));
    }
    return 0;
}