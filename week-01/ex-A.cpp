#include <iostream>      // 引入输入输出流库，用于“屏幕显示”和“键盘读取”
using    namespace std;  // 使用标准命名空间（简化cin/cout写法，否则后续就要写std::cin/std::cout）

int main()  // 主函数，程序入口，电脑从此处开始执行
{
    int    a, b;       // 定义两个整型变量a和b
    cin    >> a >> b;  // 从键盘读取两个整数，分别存入a和b
    cout   << a + b;   // 输出a与b的和
    cout   << endl;    // 输出换行
    return 0;          // 返回0表示程序正常结束
}