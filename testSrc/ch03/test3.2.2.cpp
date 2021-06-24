#include <string>
#include <iostream>

using std::cin;
using std::string;
using std::cout;
using std::endl;

void test3_2()
{
	string str = "";

	cout << "请输入完整的一行：" << endl;	
	getline(cin, str); // 获取完整一行，遇到/n结束
	cout << str << endl;
	
	cout << "通过cin获取字符串" << endl;	
	cin >> str; // 只能够获取一个有效的字符
	cout << str; 
	
	return;	
	
}

void test3_4()
{
	cout << "比较两个字符串的是否相等：" << endl;
	string str1 = "";
	string str2 = "";

	cout << "请输入str1的数据内容：" << endl;
	getline(cin, str1);
	cout << "请输入str2的数据内容：" << endl;
	getline(cin, str2);

	cout << "str1:" << str1 << endl;
	cout << "str2:" << str2 << endl;

	if(str1 >= str2)
	{
		cout << "str1比str2更大" << endl;
	}	
	else
	{
		cout << "str2比str1更大" << endl;
	}

	cout << "比较字符串长度" << endl;
	
	size_t len1 = str1.size();
	size_t len2 = str2.size();

	string lenStr = len1 >= len2 ? str1 : str2;
	cout << "str1和str2中长度较长者是：" << lenStr << endl;
}

void test3_5()
{
	string tempstr = "";
	string catStr = "";

	while(cin >> tempstr)
	{
		catStr += " " +  tempstr;
		cout << "当前拼接后的字符串为：" << catStr << endl;
		if(catStr.size() > 100) break; // 增加退出循环的条件	
	}
	
}

int main()
{
	cout << "test3_2" << endl;
	test3_2();
	cout << endl;
	cout << "test3_4" << endl;
	test3_4();
	cout << endl;
	cout << "test3_5" << endl;
	test3_5();
	
	return 0;
}
