#include<stdio.h>
#define square(n) n*n
#define subtract(n1,n2) n1-n2
#define pie 3.14
int main()
{
    int n,square;
    scanf("%d",&n);
    square=square(n);
    printf("square is: %d\n",square);
    int a,b,sub;
    scanf("%d%d",&a,&b);
    sub=subtract(a,b);
    printf("subtaction  is :%d\n",sub);
    int r;
    float area;
    
    scanf("%d",&r);
    area=(pie*r*r);
    printf("area is :%.2f",area);
}