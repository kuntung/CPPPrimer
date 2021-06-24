#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void testMod()
{
	cout << "输出一些算术运算符结果" << endl;

	cout << "21%6 = " << 21%6 << "21/6 = " << 21/6 << endl;
	cout << "21%7 = " << 21%7 << "21/7 = " << 21/7 << endl;
	cout << "-21%-8 = " << -21%-8 << "-21/-8 = " << endl;
	cout << "21%-5 = " << 21%-5 << "21/-5 = " << 21/-5 << endl;

}

void test4_4()
{
	cout << "练习4.4" << endl;

	int a = 12/3*4 + 5*15 + 24 % 4/2; 

	cout << "预测输出结果为: " << 91 << endl;
	cout << "实际结果为： " << a << endl;

}

void test4_5()
{
	cout << "练习4.5" << endl;
	
	cout << " -30*3 + 21/5的预测结果为" << -86 << ",实际结果为: " << -30*3 + 21/5 << endl;

	cout << "-30 + 3*21/5预测结果为:-18,实际为: " << -30 + 3*21/5 << endl;
	cout << "30/3*21%5预测结果为:0，实际结果为: " << 30/3*31%5 << endl;
	cout << "-30/3*21%4预测结果为：0，实际结果为: " << -30/3*21%4 << endl; 
}

int main()
{
	testMod();
	test4_4();
	test4_5();

	return 0;
}
