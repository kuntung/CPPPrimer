// 测试声明和定义
#include <iostream>

using namespace std;

void testFunc1()
{
	//extern int i = 1; // 在函数体内部初始化一个extern标记的变量，将引发错误

	return;
}

int main()
{
	extern int i; //定义
	extern int i; // 声明i

	testFunc1();

	return 0;
}
