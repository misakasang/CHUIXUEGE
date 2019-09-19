/*
问题描述，将输入的n个字符串排列，n为待输入量
输入的字符串为不定长，0~9为其数字且不重复
排列方式为，字符串最大值最小值间距升序
当间距相同时按照输入的顺序排列
*/
#include <iostream>
#include "string.h"

using namespace std;

int return_M_m(string str)
{
	int M, m;
	char M_str, m_str;
	M = m = 0;
	M_str = m_str = str[0];
	for (int cot = 0; str[cot]; cot++)
	{
		if (M_str < str[cot])
		{
			M_str = str[cot];
			M = cot;
		}
		if (m_str > str[cot])
		{
			m_str = str[cot];
			m = cot;
		}
	}
	return (M - m) > 0 ? (M - m) : (m - M);
}
int main()
{
	int n;
	string str[100];
	cout << "请输入数字n:";
	cin >> n;

	cout << "请输入字符串(长度小于10，个数小于100)" << endl;

	for (int str_cnt = 0; str_cnt < n; str_cnt++)
	{
		cin >> str[str_cnt];
	}
	cout << "验证输入(直接打印)" << endl;
	for (int str_cot = 0; str_cot < n; str_cot++)
	{
		cout << str[str_cot] << endl;
	}
	cout << "上面的程序验证输入输出合法！";
    
	#ifndef CODE66
	cout << "验证输出" << endl;
	int record_order[100] = { 0 };
	for (int check = 0; check < n; check++)
	{
		cout << str[check] << ":" << return_M_m(str[check]);
		cout << endl;
	}

	cout << "继续处理" << endl;

	for (int con_cnt0 = 0; con_cnt0 < n; con_cnt0++)
	{
		record_order[con_cnt0] = return_M_m(str[con_cnt0]);
	}

	for (int cpt = 0; cpt < n; cpt++)
	{
		/*
		尝试一波扫描的思想
		*/
		if (record_order[cpt] == 1)
		{
			cout << str[cpt] << ":" << return_M_m(str[cpt]) << "::" << cpt << endl;
		}
	}
	for (int cpt = 0; cpt < n; cpt++)
	{
		/*
		尝试一波扫描的思想
		*/
		if (record_order[cpt] == 2)
		{
			cout << str[cpt] << ":" << return_M_m(str[cpt]) << "::" << cpt << endl;
		}
	}
	for (int cpt = 0; cpt < n; cpt++)
	{
		/*
		尝试一波扫描的思想
		*/
		if (record_order[cpt] == 3)
		{
			cout << str[cpt] << ":" << return_M_m(str[cpt]) << "::" << cpt << endl;
		}
	}
	for (int cpt = 0; cpt < n; cpt++)
	{
		/*
		尝试一波扫描的思想
		*/
		if (record_order[cpt] == 4)
		{
			cout << str[cpt] << ":" << return_M_m(str[cpt]) << "::" << cpt << endl;
		}
	}
	for (int cpt = 0; cpt < n; cpt++)
	{
		/*
		尝试一波扫描的思想
		*/
		if (record_order[cpt] == 5)
		{
			cout << str[cpt] << ":" << return_M_m(str[cpt]) << "::" << cpt << endl;
		}
	}
	for (int cpt = 0; cpt < n; cpt++)
	{
		/*
		尝试一波扫描的思想
		*/
		if (record_order[cpt] == 6)
		{
			cout << str[cpt] << ":" << return_M_m(str[cpt]) << "::" << cpt << endl;
		}
	}
	for (int cpt = 0; cpt < n; cpt++)
	{
		/*
		尝试一波扫描的思想
		*/
		if (record_order[cpt] == 7)
		{
			cout << str[cpt] << ":" << return_M_m(str[cpt]) << "::" << cpt << endl;
		}
	}
	for (int cpt = 0; cpt < n; cpt++)
	{
		/*
		尝试一波扫描的思想
		*/
		if (record_order[cpt] == 8)
		{
			cout << str[cpt] << ":" << return_M_m(str[cpt]) << "::" << cpt << endl;
		}
	}
	for (int cpt = 0; cpt < n; cpt++)
	{
		/*
		尝试一波扫描的思想
		*/
		if (record_order[cpt] == 9)
		{
			cout << str[cpt] << ":" << return_M_m(str[cpt]) << "::" << cpt << endl;
		}
	}
	#endif // !1

}
