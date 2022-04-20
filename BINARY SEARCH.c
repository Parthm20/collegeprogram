#include<stdio.h>
int bsearch(int arr[],int n,int key)
{
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key)
        {
        return mid;
        }
        else if(arr[mid]>key){
        e=mid-1;
        }
        else
        {
        s=mid+1;
        }
    }
    return -1;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int key;
    scanf("%d",&key);
    printf("%d",bsearch(arr,n,key));
}
