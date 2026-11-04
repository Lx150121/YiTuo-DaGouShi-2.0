#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;

class com
{
private:
	string name;
	double rmb;
	int ramG;
	int ssdG;
public:
	//基础赋值
	com(string name1,double rmb1,int ramG1,int ssdG1)
	{
		name = name1;
		if(rmb1 > 10)
		{
			rmb = rmb1;
		}
		if(ramG1 > 0)
		{
			ramG = ramG1;
		}
		if(ssdG1 > 10)
		{
			ssdG = ssdG1;
		}
	}

	//设置型号
	void setname(string n)
	{ 
		name = n;
	}
	//设置价格
	void setrmb(double r)
	{
		if(r > 10)
		{
			rmb = r;
		}
	}
	//设置内存大小
	void setramG(int rG)
	{
		if(rG > 0)
		{
			ramG = rG;
		}
	}
	//设置存储大小
	void setssdG(int sG)
	{
		if(sG > 10)
		{
			ssdG = sG;
		}
	}

	//读取型号
	string getname()
	{
		return name;
	}
	//读取价格
	double getrmb()
	{
		return rmb;
	}
	//读取内存大小
	int getramG()
	{
		return ramG;
	}
	//读取存储大小
	int getssdG()
	{
		return ssdG;
	}
	//输出型号
	void show(int id)
	{
		cout << "电脑" << id + 1 << "型号:" << name << "  " << "价格:" << rmb << "  " << "内存大小:" << ramG << "  " << "存储大小:" << ssdG;
	}
};

int main()
{
	vector <com> arr;

	int n = 0;
	cout << "输入电脑数量:";
	cin >> n;
	cout << endl;
	string name;
	double rmb;
	int ramG;
	int ssdG;

	for(int i=0;i<n;i++)
	{
		cout << "输入电脑型号:";
		cin >> name;
		cout << "输入电脑价格:";
		cin >> rmb;
		cout << "输入电脑内存大小:";
		cin >> ramG;
		cout << "输入电脑存储大小:";
		cin >> ssdG;
		arr.push_back(com(name,rmb,ramG,ssdG));
		cout << endl;
	}

	for(int i=0;i<n;i++)
	{
		arr[i].show(i);
		cout << endl;
	}
	system("pause");
	return 0;
}