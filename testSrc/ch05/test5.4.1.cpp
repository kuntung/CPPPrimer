#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

void test5_14()
{
    cout << "练习5.14" << endl;

    string temp = "";
    string curStr = "";
    int mostFreq = 0, curFreq = 0;

    cout << "请输入一个字符串: " << endl;
    while(cin >> curStr)
    {

        if(curStr == "quit") break;
        if(curStr == temp)
        {
           ++curFreq;
           cout << "当前字符: " << curStr << "出现了< " << curFreq << ">次" << endl;
        }
        else
        {
            temp = curStr;
            curFreq = 1;
            cout << "当前字符: " << temp << "出现了< " << curFreq << ">次" << endl;
        }
    }
}

int main()
{
    test5_14();

    return 0;
}
