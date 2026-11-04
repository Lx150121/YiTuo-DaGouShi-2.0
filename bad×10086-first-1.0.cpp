#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

typedef int 整形;
typedef double 双精度;
typedef bool 布尔;
typedef char 字符;

#define 主函数 main
#define 返回 return
#define 如果 if
#define 循环 for
#define 输出 cout
#define 换行 endl

#include <bits/stdc++.h>
using namespace std;

整形 主函数()
{
    整形 数组[15]= {0,1,2,3,4,5,6,7,8,9};

    循环(整形 i=0;i<=9;i++)
    {
        输出 << 数组[i] << 换行;
    }

    返回 0;
}