#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void test4_10()
{
	cout << "练习4.9" << endl;	
	int a = 0;
	cout << "请输入一个数字: " << endl;
	while(cin >> a)
	{
		if(a == 42) break;
		cout << a << endl;
	}
	cout << "最后一个字符为" << a << endl;
}

void test4_11()
{
	int a, b, c, d;
	cout << "测试4.11" << endl;
	
	cout << "要求a > b, b > c, c > d" << endl;
	cout << "请输入a,b,c,d的值: " << endl;

	cin >> a >> b >> c >> d;
	bool res = a > b && b > c && c > d;
	if(res)
		cout << "条件满足" << endl;
	else
		cout << "条件不满足" << endl;


}

int main()
{
	test4_10();
	test4_11();

	return 0;
}
