// 运行练习2.14的代码
#include <iostream>

using namespace std;

void func()
{
	int i = 100, sum = 0;
	for(int i = 0; i != 10; ++i)
		sum += i;
	
	cout << i << " " << sum << endl;

}

int main()
{
	func();

	return 0;
}
