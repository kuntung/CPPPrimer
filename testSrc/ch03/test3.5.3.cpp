#include <iostream>
#include <vector>
#include <iterator> 

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;

void test3_34()
{
	cout << "练习3.34代码演示:" << endl;

	int arr[5] = {1, 2, 3, 4, 5};
	
	int* p1 = &arr[2];
	int *p2 = &arr[1];
	
	p1 += p2 - p1;
	cout << " p1 += p2 - p1的结果为：" << *p1 << endl;
}


void test3_34_2()
{
	cout << "练习3.34越界演示:" << endl;

	int arr[5] = {1, 2, 3, 4, 5};
	
	int* p1 = &arr[2];
	int *p2 = &arr[4];
	
	p1 += p2 - p1;

	cout << "当前p1 += p2 - p1所指向元素为: " << *p1 << endl;

}

void test3_35()
{
	cout << "练习3.35代码示例：" << endl;

	int arr[] = {1,2,3,4,5,6,7,8,9,10};

	int* p1 = begin(arr);
	int* p2 = end(arr);
	cout << "当前数组元素为：";
	
	for(auto num : arr)
		cout << num << " ";

	cout << endl;

	cout << "修改后的元素为：";
	while(p1 != p2)
	{
		*p1 = 0;
		cout << *p1 << " ";
		p1++;
	}
	
	cout << endl;
}

int main()
{
	test3_34();
	test3_34_2();
	test3_35();

	return 0;
}

