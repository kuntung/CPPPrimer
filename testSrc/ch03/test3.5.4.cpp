#include <cstring>
#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

void test3_37()
{
	cout << "练习3.37代码示例：" << endl;
	
	const char ca[] = {'h', 'e', 'l', 'l', 'o'};
	const char *cp = ca;

	while (*cp)
	{
		cout << *cp << endl;
		++cp;
	}
	
	cout << endl;
}

void test3_39()
{
	string str1 = "hello world";
	string str2 = "happy birthday";

	cout << "练习3.39代码示例：" << endl;
	
	cout << "str1:" << str1 << endl;
	cout << "str2:" << str2 << endl;
	if(str1 > str2) cout << "str1比str2更大" << endl;
	else cout << "str2比str1更大" << endl; 	

	char str3[] = "hello world";
	char str4[] = "happy birthday";
	
	cout << "str3: " << str3 << endl;
	cout << "str4: " << str4 << endl;
	if(strcmp(str3, str4) >= 0) cout << "str3比str4更大" << endl;
	else cout << "str4比str3更大" << endl;
}

void test3_40()
{
	cout << "练习3.40" << endl;
	
	char str1[] = "hello world";
	char str2[] = "你好，世界";

	size_t SIZE = strlen(str1) + strlen(str2);

	char str3[SIZE + 1];
	
	strcpy(str3, str1);
	strcat(str3, str2);

	cout << "拼接后的结果为: " << str3 << endl;
}

int main()
{

	test3_37();
	test3_39();
	test3_40();

	return 0;
}
