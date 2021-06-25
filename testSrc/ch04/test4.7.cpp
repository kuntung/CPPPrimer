#include <vector>
#include <iostream>
#include <string>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;

template<typename T>
void printVec(const vector<T>& vec)
{
	cout << "vec的元素输出结果为: " << endl;
	for(auto& item : vec)
		cout << item << ", ";
	cout << "打印结束" << endl;
}

void test4_21()
{
	cout << "练习4.21" << endl;
	
	vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	printVec(vec);
	for(int& i : vec)
	{
		if(i%2 == 1) i *= 2;
	}

	cout << "处理后";
	printVec(vec);
}

void test4_23()
{
	cout << "练习4.23代码示例" << endl;
	
	string s = "word";
	string p1 = s + (s[s.size() - 1] == 's' ? "" : "s"); // 无法将字符串同字符比较
	
}

int main()
{
	test4_21();
	test4_23();

	return 0;
}
