#include <iostream>
#include <iomanip>  // 包含输入输出格式化库，提供setprecision和fixed
using namespace std;

int main()
{
    int    N, t;          // 定义整数变量N和t，N用于保存天数，t用于循环技术
    double x, average=0;  // 定义双精度浮点数x（临时存储温度）和average(总和，初始值为0)

    cin >> t;  // 从键盘输入天数，存入变量t
    N   =  t;  // 将t的值赋给N，保存原始天数（后续t会变化）

    while(t--)  // 循环t次，每次判断后t自动减1
    {
        cin     >> x;  // 输入一天的温度值，存入变量x
        average+=x;    // 将温度累加到average中（此时的average暂存总和）
    }

    average /= N;  // 用总和除以天数N，得到平均值

    cout << fixed << setprecision(2)<<average << endl;  // 输出平均值，保留2位小数

    return 0;
}