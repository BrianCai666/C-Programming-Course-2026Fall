# Week-01 作业

## 第一周学习总结

### 一、输入输出

| 操作 | C语言 | C++ |
|------|-------|-----|
| 输入 | `scanf("%d", &a)` | `cin >> a` |
| 输出 | `printf("%d", a)` | `cout << a` |
| 换行 | `\n` | `endl` |

C语言常用格式符：

| 格式符 | 用途 |
|--------|------|
| `%d` | 整数 |
| `%f` | 输出小数 |
| `%lf` | 输入小数（double） |
| `%c` | 字符 |

注意：`scanf` 需要 `&`，`cin` 不需要。

### 二、三种数据类型

| 类型 | 关键字 | 示例 |
|------|--------|------|
| 整数 | `int` | 学号、计数器 |
| 小数 | `double` | 成绩、温度 |
| 字符 | `char` | 性别 |

### 三、格式化输出（保留两位小数）

C语言：

```c
printf("%.2f", x);
```

C++：

```cpp
cout << fixed << setprecision(2) << x;
```

C++ 需引入头文件 `#include <iomanip>`。

### 四、循环 `while(t--)`

- 循环 `t` 次，每次 `t` 自动减 1。
- 若后面还需用到原值，要提前保存：`N = t;`。

### 五、逻辑表达式

| 运算符 | 含义 |
|--------|------|
| `>` / `<` | 大于 / 小于 |
| `==` | 等于（双等号） |
| `&&` | 并且 |

结果为 `1`（真）或 `0`（假）。

### 六、字符读写（C语言）

```c
char x;
x = getchar();
putchar(x);
```

`getchar()` 会读入回车符 `\n`，需要注意。

### 七、常见错误

| 错误 | 正确 |
|------|------|
| `scanf("%d", a)` | `scanf("%d", &a)` |
| `if (a = b)` | `if (a == b)` |
| double 用 `%d` 输出 | 用 `%f` 输出 |

### 八、完成题目

- A：整数加法
- B：顺序调整
- C：求平均温度
- D：整数输入输出
- E：字符输入输出
- F：图案输出
- G：逻辑表达式
- H：小数格式化

## 题目列表

### 题目A
题目描述
Calculate a+b

输入
Two integer a,b (0<=a,b<=10)

输出
Output a+b

IO模式
本题IO模式为标准输入/输出(Standard IO)，你需要从标准输入流中读入数据，并将答案输出至标准输出流中。

提示：
Q: Where are the input and the output? A: Your program shall always read input from stdin (Standard Input) and write output to stdout (Standard Output). For example, you can use 'scanf' in C or 'cin' in C++ to read from stdin, and use 'printf' in C or 'cout' in C++ to write to stdout. You shall not output any extra data to standard output other than that required by the problem, otherwise you will get a "Wrong Answer". User programs are not allowed to open and read from/write to files. You will get a "Runtime Error" or a "Wrong Answer" if you try to do so. Here is a sample solution for problem 1000 using C++/G++:
```C++
#include <iostream>
using namespace std;
int  main()
{
    int a,b;
    cin >> a >> b;
    cout << a+b << endl;
    return 0;
}
```

It's important that the return type of main() must be int when you use G++/GCC,or you may get compile error. Here is a sample solution for problem 1000 using C/GCC:
```C
#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a, &b);
    printf("%d\n",a+b);
    return 0;
}
```

### 题目B
题目描述
某系统出现故障，导致多个数据混杂在一起输入，顺序有错
先假设输入数据顺序为：成绩（double）、学生学号(int)、学生性别(char)
现在要求编写一个程序，把多行输入顺序错误的数据按照正确顺序重新输出
具体输出格式看下面的【输出】要求

输入
第一行输入t，表示有t行顺序错误的输入数据
接着每行依次输入三个参数：学生成绩、学生学号、学生性别

输出
每行输入对应三行输出，包括
第一行输出学生姓名
第二行输出学生学号
第三行输出学生成绩

IO模式
本题IO模式为标准输入/输出(Standard IO)，你需要从标准输入流中读入数据，并将答案输出至标准输出流中。

提示
参考代码如下，按照题目输入输出要求的数据顺序
```C++
#include <iostream>

using namespace std;

int  main()

{  int t;  

   double dx;

    int ix;

    char cx;

   cin>>t;

   while(t--)

    {  cin>>dx>>ix>>cx;  //输入一行顺序错误的数据

       cout<<ix<<endl;

       cout<<cx<<endl;

       cout<<dx<<endl; //输出三行正确顺序的数据

   }

    return 0;

}
```

### 题目C
题目描述
输入n天的城市温度，求平均值。
要求精确到小数点后2位

输入
第一行输入N，表示有N天的温度
接着每一行输入的数据代表一天的温度，例如32.25

输出
输出一行，表示气温平均值，要求精确到小数点后2位

C++精确小数点后2位的参考代码
```C++
#include<iomanip>

double pi=3.1415926;

cout<<fixed<<setprecision(3)<<pi<<endl; //输出结果是3.142
```
注意输出小数点结果在不同语言的可能有做四舍五入，或者不做四舍五入，请考虑自己使用的语言和工具

C语言示范
```C
double pi=3.1415926;

print("%.3f", pi); //输出结果是3.142
```

提示
C++参考代码
```
#include <iostream>

#include <iomanip>

using namespace std;

int main()

{ int N, t;

 double x, average=0;

 cin>>t;

  N=t;

 while (t--)

    {

       cin>>x;

 average+=x;

    }

  average /= N;

 cout<<fixed<<setprecision(2)<<average<<endl;

 return 0;

}
```

### 题目D
题目描述
输入一个整数，并原样输出

输入
输入一个整数

输出
原样输出前面输入的整数

IO模式
本题IO模式为标准输入/输出(Standard IO)，你需要从标准输入流中读入数据，并将答案输出至标准输出流中。

提示
定义一个整型的变量用于保存输入的数据

### 题目E
题目描述
输入一个字符，并原样输出

输入
输入一个字符

输出
原样输出之前输入的那个字符

IO模式
本题IO模式为标准输入/输出(Standard IO)，你需要从标准输入流中读入数据，并将答案输出至标准输出流中。

提示
定义一个字符型的变量用于保存输入的数据

### 题目F
题目描述
输出以下信息：

******************************
I      HAVE      AN      IDEA!
******************************

第一行与第三行分别有30颗*号；第二行，每个单词之间有6个空格。

*也是输出的一部分!

输入
无需输入

输出
******************************
I      HAVE      AN      IDEA!
******************************

IO模式
本题IO模式为标准输入/输出(Standard IO)，你需要从标准输入流中读入数据，并将答案输出至标准输出流中。

### 题目G
题目描述
对以下表达式进行求值，a、b、c是三个变量，它们都是小于100的自然数

a+b>c&&b==c

输入
第一行输入T，表示后续有T个测试示例
第二行开始，每行输入3个变量值，输入T行

输出
每行输出计算结果

IO模式
本题IO模式为标准输入/输出(Standard IO)，你需要从标准输入流中读入数据，并将答案输出至标准输出流中。

提示
```C
#include <stdio.h>

int main()

{

    int a,b,c,t;

    scanf("%d",&t);

 while (t--)

 { scanf("%d %d %d",&a, &b,&c);

 printf("%d\n", a+b>c&&b==c);

 }

    return 0;

}
```

### 题目H
题目描述
输入一个小数，并按要求输出

输入
输入一个小数

输出
输出该小数，保留两位小数

IO模式
本题IO模式为标准输入/输出(Standard IO)，你需要从标准输入流中读入数据，并将答案输出至标准输出流中。