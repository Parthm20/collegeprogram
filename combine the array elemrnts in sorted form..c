#include<stdio.h>
#include<stdlib.h>
int main()
{
 int n,n2,i,*ptr,*ptr1,*merge,temp,j;
 printf("enter number of element of first and second array:\n");
 scanf("%d%d",&n,&n2);
 ptr=(int*)malloc(n*sizeof(int));
 ptr1=(int*)malloc(n2*sizeof(int));
 merge=(int*)malloc((n+n2)*sizeof(int));
 for(i=0;i<n;i++)
 {
     scanf("%d",ptr+i);
 }
 for(i=0;i<n2;i++)
 {
     scanf("%d",ptr1+i);
 }
  for( i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(ptr+i) > *(ptr+j))
            {
                temp = *(ptr+i);
                *(ptr+i) = *(ptr+j);
               *(ptr+j) = temp;
            }
        }
    }
   for( i=0;i<n2;i++)
    {
        for(j=i+1;j<n2;j++)
        {
            if(*(ptr1+i) > * (ptr1+j))
            {
                temp= * (ptr1+i);
                *(ptr1+i) = *(ptr1+j);
               *(ptr1+j) = temp;
            }
        }
    }
    i=0;
	for(j=0;j<n;j++)
	{
		*(merge+i) = *(ptr+j);
		i++;
	}
	for(j=0;j<n2;j++)
	{
		*(merge+i) = *(ptr1+j);
		i++;
	}
	printf("After Merging:");
	for(i=0;i<n+n2;i++)
	{
		printf("%d ",*(merge+i));
	}
	return 0;
}

