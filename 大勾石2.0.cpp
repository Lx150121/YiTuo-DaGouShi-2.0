#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;
typedef int 去掉小数点;
typedef double 加上小数点;
typedef bool TF;
typedef char one;
#define 郭德纲有老鼠粉吃 main
#define 编译器崩溃啦哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈 return
#define 反正 if
#define 回回回回回回回回回回 for
#define 哈基米哦南北绿豆 cout
#define 进去受刑 cin
#define 这不是给人看的 endl
#define 长长长长长 long long
#define 退钱 delete
#define 棍母 void
#define 字字字字字字字字 string
/*
	冰冰冰 你怎么看到棍母的 难道你不是凡人？🤣🤣🤣🤣🤣🤣🤣🤣🤣🤣🤣🤣🤣🤣🤣🤣🤣🤣🤣
*/
class com
{
private:
	字字字字字字字字 name;
	加上小数点 rmb;
	去掉小数点 ramG;
	去掉小数点 ssdG;
public:
	//基础赋值
	com(字字字字字字字字 name1,加上小数点 rmb1,去掉小数点 ramG1,去掉小数点 ssdG1)
	{
		name = name1;
		反正(rmb1 > 10)
		{
			rmb = rmb1;
		}
		反正(ramG1 > 0)
		{
			ramG = ramG1;
		}
		反正(ssdG1 > 10)
		{
			ssdG = ssdG1;
		}
	}

	//设置型号
	棍母 setname(字字字字字字字字 n)
	{ 
		name = n;
	}
	//设置价格
	棍母 setrmb(加上小数点 r)
	{
		反正(r > 10)
		{
			rmb = r;
		}
	}
	//设置内存大小
	棍母 setramG(去掉小数点 rG)
	{
		反正(rG > 0)
		{
			ramG = rG;
		}
	}
	//设置存储大小
	棍母 setssdG(去掉小数点 sG)
	{
		反正(sG > 10)
		{
			ssdG = sG;
		}
	}
/*
	你们到底在干什么？？？？？？😅😅😅😅😅😅😅😅😅😅😅
*/
//大棍母大棍母
	//读取型号
	字字字字字字字字 getname()
	{
		编译器崩溃啦哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈 name;
	}
	//读取价格
	加上小数点 getrmb()
	{
		编译器崩溃啦哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈 rmb;
	}
	//读取内存大小
	去掉小数点 getramG()
	{
		编译器崩溃啦哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈 ramG;
	}
	//读取存储大小
	去掉小数点 getssdG()
	{
		编译器崩溃啦哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈 ssdG;
	}
	//输出型号
	棍母 show(去掉小数点 id)
	{
		哈基米哦南北绿豆 << "电脑" << id + 1 << "型号:" << name << "  " << "价格:" << rmb << "  " << "内存大小:" << ramG << "  " << "存储大小:" << ssdG;
	}
};
/*还不是我带出来的种？😍😍😍😍😍😍😍😍😍😍😍😍😍😍😍😍😍😍*/
去掉小数点 郭德纲有老鼠粉吃()
{
	vector <com> arr;

	去掉小数点 n = 0;
	哈基米哦南北绿豆 << "输入电脑数量:";
	进去受刑 >> n;
	哈基米哦南北绿豆 << endl;
	字字字字字字字字 name;
	加上小数点 rmb;
	去掉小数点 ramG;
	去掉小数点 ssdG;
/*
	What are you doing？？？？？？？？🙄🙄
*/
	回回回回回回回回回回(去掉小数点 i=0;i<n;i++)
	{
		哈基米哦南北绿豆 << "输入电脑型号:";
		进去受刑 >> name;
		哈基米哦南北绿豆 << "输入电脑价格:";
		进去受刑 >> rmb;
		哈基米哦南北绿豆 << "输入电脑内存大小:";
		进去受刑 >> ramG;
		哈基米哦南北绿豆 << "输入电脑存储大小:";
		进去受刑 >> ssdG;
		arr.push_back(com(name,rmb,ramG,ssdG));
		哈基米哦南北绿豆 << endl;
	}

	回回回回回回回回回回(去掉小数点 i=0;i<n;i++)
	{
		arr[i].show(i);
		哈基米哦南北绿豆 << endl;
	}
	system("pause");
	编译器崩溃啦哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈 0;
}
//那咋了，见棍母去吧😭😭😭😭😭😭😭😭😭😭😭😭😭😭😭😭