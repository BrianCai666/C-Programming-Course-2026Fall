#include <iostream>
using namespace std;

int main()
{
    int    t;     // 定义一个整数变量t，用来存储友多少行数据
    double dx;    // 定义一个双精度浮点数变量dx，用来存储成绩（因为成绩可能有小数）
    int    ix;    // 定义一个整数变量ix，用来存储学号
    char   cx;    // 定义一个字符变量cx，用来存储性别（'M'或'F'）
    cin    >> t;  // 从键盘读取第一个书，存到t里

    while(t--)  // 循环t次，每次t减1，直到t变成0
    {
            // 输入一行顺序错误的数据
        cin >> dx >> ix >> cx;

            // 输出三行正确顺序的数据

    cout << ix << endl;
    cout << cx << endl;
    cout << dx << endl;
    }

    return 0;  
}