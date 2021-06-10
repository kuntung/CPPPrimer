#include <iostream>

using namespace std;

void test1_9()
{
	int res = 0;
	int low = 50;
	while(low <= 100)
	{
		res += low;
		low++;
	}	
}

void test1_10()
{
	cout << "打印10到0之间的整数: ";
	
	int high = 10;
	
	while(high >= 0)
	{
		cout << high << " ";
		--high;
	}
	
	cout << endl;
}

void test1_11()
{
	int a = 0;
	int b = 0;
	
	cout << "请输入区间[a, b]的两个边界值:";
	cin >> a >> b;
	while(a <= b)
	{
		cout << a << " ";
		a++;
	}	
	cout << endl;
}
int main()
{
	cout << "练习1.9" << endl;
		
	test1_9();
	test1_10();
	test1_11();

	return 0;
}
