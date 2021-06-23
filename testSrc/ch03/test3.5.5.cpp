#include <iostream>
#include <vector>
#include <iterator>

using std::vector;
using std::begin;
using std::end;
using std::cin;
using std::cout;
using std::endl;

void test3_41()
{
	cout << "通过数组来初始化vector对象" << endl;
	int arr[] = {1, 2, 3, 4, 5};
		
	vector<int> vec(begin(arr), end(arr)); // 
}

void test3_42()
{
	cout << "将vector拷贝给数组" << endl;
	vector<int> vec = {1,2,3,4,5};

	size_t size = vec.size();
	
	int arr[5];

	auto begin = vec.begin();
	size_t cnt = 0;
	while(begin != vec.end() && cnt <= size)
	{

		arr[cnt] = *begin;
		begin++;
		cnt++;
	}

	
}

int main()
{
	test3_41();
	test3_42();
	
	return 0;
}
