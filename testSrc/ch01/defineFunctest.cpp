#include <iostream>

using namespace std;
#define printNum(num)\
		do\
		{ \
			cout << num << " ";\
			num = num - 1;\
		}while(num);\
		cout << endl;\

int main()
{
	printNum(10);

	return 0;
}
