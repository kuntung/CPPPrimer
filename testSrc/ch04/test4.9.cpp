#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void test4_28()
{
	cout << "练习4.28,输出每一个内置类型所占空间大小" << endl;

	cout << "sizeof(char) = " << sizeof(char) << endl;
	cout << "sizeof(int) = " << sizeof(int) << endl;
	cout << "sizeof(float) = " << sizeof(float) << endl;
	cout << "sizeof(double) = " << sizeof(double) << endl;
	cout << "sizeof(unsigned) = " << sizeof(unsigned) << endl;
	cout << "sizeof(unsigned long) = " << sizeof(unsigned long) << endl;
	cout << "sizeof(long) = " << sizeof(long) << endl;
	cout << "sizeof(long long) = " << sizeof(long long) << endl;

	return;
}

void test4_29()
{
	cout << "练习4.29的代码测试" << endl;
	int x[10];
	int *p = x;

	cout << "sizeof(x)/sizeof(*x)的猜测值为10，实际值为: " << (sizeof(x)/sizeof(*x)) << endl;
	cout << "sizeof(p)/sizeof(*p)的猜测值为1，实际值为: " << (sizeof(p)/sizeof(*p)) << endl;

}

int main()
{
	test4_28();
	test4_29();

	return 0;
}
