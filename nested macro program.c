#include<stdio.h>
#define square(x)  x*x
#define cube(x)   square(x)*x
#define sixth(x)  cube(x)* cube(x)
int main()
{
    int a;
    scanf("%d",&a);
    printf("square is :%d\n",square(a));
    printf("cube is :%d\n",cube(a));
    printf("sixth is :%d\n",sixth(a));
    return 0;
}