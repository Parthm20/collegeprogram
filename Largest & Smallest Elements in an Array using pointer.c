#include<stdio.h>
void minmax(int arr[],int len,int *min,int *max)
{
    *min,*max=0;
    for(int i=0;i<len;i++)
    {
        if(arr[i] < *min)
        *min = arr[i];
        if(arr[i] > *max)
        *max = arr[i];
    }
}
int main()
{
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  int min,max;
  int len= sizeof(a)/sizeof(a[0]);
  minmax(a,len,&min,&max);
  printf("largest number is : %d and smallest number is : %d",max,min);
  return 0;
}
