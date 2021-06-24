#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;

template<typename T>
void printVec(const vector<T>& vec)
{
	for(T& item: vec)
		cout << item << ", ";
	
	cout << endl;
}

void test3_17()
{
	cout << "test body of 3.17" << endl;
	vector<string> vec;
	string str = "";
	
	cout << "请输入一串单词" << endl;
	cin >> str;
	
	string temp = "";
	for(char& ch: str)
	{
		if(isspace(ch))
			vec.push_back(temp);
		else
		{
			temp += 'A' + (ch - 'a');
		}
	}
	vec.push_back(temp);
	
	cout << "处理后的结果为" << endl;
	printVec(vec);	
}

int main()
{
	test3_17();

	return 0;
}
