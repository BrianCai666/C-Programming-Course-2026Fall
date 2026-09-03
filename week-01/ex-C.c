#include <stdio.h>

int main()
{
    int    N, t;            // 定义整数变量N和t，N用于保存天数，t用于循环计数
    double x, average = 0;  //定义双精度浮点数x（历史存储温度）和average（总和，初始化为0）

    scanf("%d",&t);  // 从键盘输入天数，存入变量t（注意取地址符&）
    N     = t;       // 将t的值赋给N

    while(t--)
    {
        scanf  ("%lf", &x);  // 输入一天的温度值，存入变量x（%lf对应double类型）
        average += x;        // 将温度累加到average中
    }

    average /= N;  // 用总和除以天数，得到平均值

    printf("%.2f\n", average);  // 输出平均值，保留2位小数

    return 0;
}