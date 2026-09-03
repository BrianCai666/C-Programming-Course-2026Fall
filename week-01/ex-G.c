#include <stdio.h>

int main()
{
    int a, b, c, t;  // 声明4个整型变量，a,b,c用于存储输入的三个数，t用于存储测试案例的个数

    scanf("%d", &t); // 从标准输入读取一个整数，存储到变量t中

    while (t--)
    {
        scanf("%d %d %d", &a, &b, &c);
        printf("%d\n", a + b > c && b == c);
    }

    return 0;
}