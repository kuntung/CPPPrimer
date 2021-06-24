#include <iostream>

using namespace std;

int main()
{
	string str = "hello world";

	for(char ch: str)
		cout << ch << " ";
	cout << endl;

	return 0;
}
