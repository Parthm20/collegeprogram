#include<stdio.h>
int main()
{
    int a[5];
    int even=0,odd=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        if(a[i]%2==0)
        even++;
        else
        odd++;
        
    }
    printf("total even number is :%d\n",even);
    printf("total odd number is :%d",odd);
}