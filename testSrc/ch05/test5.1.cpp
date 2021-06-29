#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void test5_3()
{
    cout << "练习5.3代码示例： " << endl;
       
    cout << "复合语句块实现while" << endl;
    
    int val = 0;
    int sum = 0;
    while (val <= 10)
    {
       sum += val;
       ++val;
    }
    cout << "sum = " << sum << endl;
       
    cout << "通过逗号运算符实现" << endl;
    sum = 0, val = 0;
    while ( val <= 10)
        sum += val, ++val;

    cout << "sum = " << sum << endl;

    return;
}

int main()
{
    test5_3();

    return 0;
}
