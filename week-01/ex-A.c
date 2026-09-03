#include <stdio.h>  // 引入标准输入输出库（提供scanf和printf）

int main()  // 程序入口
{
    int    a, b;              // 定义两个整型变量a和b
    scanf ("%d %d", &a, &b);  // 从键盘读取两个整数，分别存入a和b（&表示取地址，%d是一个占位符）
    printf("%d\n",a+b);       // 输出a与b的和，\n表示换行
    return 0;                 // 返回0表示程序正常结束
}