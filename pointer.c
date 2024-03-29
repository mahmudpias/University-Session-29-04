#include<stdio.h>
int main()
{
    int a = 10;
    printf("Before changing, Value = %d\n",a);
    printf("Address = %d\n",&a);

    int* p;
    p = &a;

    *p = 20;

     printf("After changing, Value = %d\n",a);

    return 0;
}