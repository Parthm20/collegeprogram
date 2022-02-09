#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i;
    int *ptr;
    printf("enter array element :\n");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }
}