#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);      /*输入起始时间和流逝时间*/

    int hour=a/100, minute=a%100;        /*起始时间四位数对100取整获取小时数，对100取余获取分钟数*/
    int sum=0;                           /*把起始时间转化成总分钟数*/
    sum = minute + b;                    /*获取相加之后的分钟数*/

    if(sum > 0)
    {                                    /*相加之后的分钟数为正数*/
        if(sum >= 60)                    /*总分钟数大于60分钟*/
            {
            hour += sum/60;
            minute = sum%60;
            }else                        /*总分钟数小于60分钟*/
            { minute += b; }


    }else if(sum < 0)
    {                                    /*相加之后的分钟数为负数*/
        if( sum >= -60)
        {                                /*总分钟数在-60分钟内*/
            hour --;
            minute = sum + 60;
        }else
        {                                /*总分钟数大于-60分钟*/
            if( sum%60 == 0 )
            {
                hour += (sum/60 - 1);
                minute = 0;
            }
            else
            {
                hour += (sum/60 -1);
                minute = 60 + sum % 60;
            }
        }
    }else
    { minute = sum; }                    /*相加之后的分钟数为0*/

    printf("%d", hour*100+minute);
    return 0;
}