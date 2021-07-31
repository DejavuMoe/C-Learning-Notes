#include <stdio.h>

int main()
{
    int num,a,b,c;              /*a,b,c分别是这个正三位数百、十、个位上的数字*/
    scanf("%d",&num);   /*输入这个正三位数*/

    a = num/100;
    b = (num%100)/10;           /*b = (num/10)%10;*/
    c = num%10;

    printf("%d",c*100+b*10+a*1);
    return 0;
}