#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);

    int a,b;
    a = num % 16;
    b = num/16 * 10 + a;

    printf("%d \n", b);
    return 0;
}