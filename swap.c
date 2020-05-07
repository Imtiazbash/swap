#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a,b;
    printf("enter the value of a\n");
    scanf("%d",&a);
    printf("enter the value of b\n");
    scanf("%d",&b);
    printf("before swap a=%d b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swap a=%d b=%d",a,b);
    return 0;
}
