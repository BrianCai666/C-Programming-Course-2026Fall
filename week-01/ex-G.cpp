#include <iostream>
using namespace std;

int main()
{
    int a, b, c, t;
    
      // 读取测试案例个数
    cin >> t;

      // 循环t次
    while(t--)
    {
          // 读取一组数据
        cin >> a >> b >> c;

          // 计算表达式并输出结果（需添加括号表示优先级）
        int result = (a + b > c) && (b == c);
        cout << result << endl;
    }

    return 0;
}