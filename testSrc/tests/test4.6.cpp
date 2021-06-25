#include <vector>
#include <iterator>
#include <iostream>
#include <string>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;

void test4_20()
{
	using vecIter = vector<string>::iterator;
	vector<string> vec = {"hello world", "你好，世界", "hello c++"};
	
	
	vecIter begin = vec.begin();
	
	cout << "++*iter所指向的内容为: ";	
	// cout << ++(*begin) << endl;
	 cout <<*++(begin) << endl;
}

int main()
{
	test4_20();

	return 0;
}
