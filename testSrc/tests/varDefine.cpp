#include <iostream>

using namespace std;

int main()
{
	int* p1, p2;
	p2 = 3;
	p1 = &p2;
	cout << "size of p1: " << sizeof(p1) << endl;
	cout << "size of p2: " << sizeof(p2) << endl;

	return 0;
}
