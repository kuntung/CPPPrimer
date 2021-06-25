#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void test4_25()
{
	char q = 71;
	char newQ = ~q<<6;
	cout << "~'q'<<6 " << newQ << endl;
}

void test4_27()
{
	unsigned long ul1 = 3, ul2 = 7;
	
	cout << "ul1 & ul2 = " << (ul1&ul2) << endl;
	cout << "ul1 | ul2 = " << (ul1 | ul2 ) << endl;
	cout << "ul1 && ul2 = " << (ul1&&ul2) << endl;
	cout << "ul1 || ul2 = " << (ul1 || ul2) << endl;

}

int main()
{
	test4_25();
	test4_27();

	return 0;
}
