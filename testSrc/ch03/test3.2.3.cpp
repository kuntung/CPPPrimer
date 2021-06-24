#include <string>
#include <cctype>
#include <iostream>

using std::cin;
using std::cout;
using std::string;
using std::endl;

void test3_6()
{
	cout << "func of test3.6 " << endl;
	
	string str = "hello world";
	// cout << "要替换的字符串为: " << str << endl;

	// for(auto& ch : str)
	// {
	// 	ch = 'X';
	// }

	// cout << "替换后的字符串为：" << str << endl;
	// 
	// str = "hello world";	
	cout << "使用operator[]进行替换：" << endl;
	string::size_type i = 0;
	for(; i < str.length(); i++)
	{
		str[i] = 'X';

		cout << "使用operator[]进行替换：" << str << endl;
	}
}

void test3_10()
{
	cout << "test3_10" << endl;
	string str;
	cout << "请输入一个带标点的字符串" << endl;
	cin >> str;	
	
	cout << "消除标点前的字符串为：" << str << endl;
	string newStr = "";
	for(char ch: str)
	{
		if(ispunct(ch)) continue;
		else newStr += ch;
	}
	
	cout << "消除标点后的字符串为：" << newStr << endl;
}

int main()
{
	test3_6();
	test3_10();
	
	return 0;
}
