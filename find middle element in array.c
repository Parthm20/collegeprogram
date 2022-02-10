#include<stdio.h>
int *findmid(int arr[],int n)
{
    return(&arr[n/2]);
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
  int len=sizeof(a)/sizeof(a[0]);
  int *mid=findmid(a,n);
  printf("mid elememt is : %d",*mid);
  return 0;
  
}