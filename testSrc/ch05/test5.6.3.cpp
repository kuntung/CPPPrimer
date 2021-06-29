#include <iostream>
#include <stdexcept>
#include <exception>

using std::exception;
using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

void test5_24()
{
    cout << "练习5.6.3，读取两个整数并且计算第一个数除第二个数的结果" << endl;

    int num1 = 0;
    int num2 = 1; // 避免出现x/0的错误

    cout << "num1 = ";
    try{
        cin >> num1;
    }
    catch(exception& e)
    {
        cout << "num1必须是整数" << endl;
    }
    cout << "num2 = ";
    try{
        cin >> num2;
        if (num2 == 0)
            throw runtime_error("num2不能为0");
    }
    catch(exception())
    {
        cout << "num2必须是整数" << endl;
    }
    catch(runtime_error rerr)
    {
        cout << rerr.what() << endl;
    }

    cout << "num1 / num2 = " << num1 / num2 << endl;
}

int main()
{

    test5_24();

    return 0;
}
