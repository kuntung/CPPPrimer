#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void test5_11()
{
    cout << "实现能够统计大小写字母及空格(32)，制表符(9), 换行符(10?) " << endl;
    int cnta = 0, cnti = 0, cnto = 0, cnte= 0, cntSpace = 0, cntTab = 0, cntEnter = 0;
    char ch;
    cout << "输入q(Q)退出! " << endl;
    while(cin >> ch)
    {
        switch(ch)
        {
            case 'a': case 'A':
                ++cnta;
                break;
            case 'i': case 'I':
                ++cnti;
                break;
            case 'o': case 'O':
                ++cnto;
                break;
            case 9:
                ++cntTab;
                break;
            case 10:
                ++cntEnter;
                break;
            case 32:
                ++cntSpace;
                break;
            default:
                break;
        }
        if(ch == 'q' || ch == 'Q') break;
    }
    cout << "程序退出" << endl; 
}

int main()
{
    test5_11();
    
    return 0;
}
