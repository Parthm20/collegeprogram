#include<stdio.h>
int main()
{
    int arr1[5],arr2[5],sum[5];
    printf("ENTER ELEMENT OF ARRAY 1:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("ENTER ELEMENT OF ARRAY 2:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<5;i++)
    {
        sum[i]=arr1[i]+arr2[i];
        printf("sum at index %d is %d\n",i,sum[i]);
    }
    
}