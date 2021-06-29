#include <iostream>
#include <string>
#include <cctype>
using std::string;
using std::cin;
using std::cout;
using std::endl;

void test5_5()
{
    cout << "练习5.5" << endl;
    cout << "数字到成绩的转换规则: {'F':[0,59), 'D':[60, 69), 'C':[70, 79), 'B':[80, 89),"
         << "  'A':[90, 99), 'S': 100}" << endl;

    cout << "请输入需要转换的分数: " << endl;
    int grade = 0;
    char level[] = {'F', 'D', 'C', 'B', 'A', 'S'};
    while(cin >> grade) // FIXME: 当输入为非数字如何处理？
    {
        char levelTemp = 'N';
       if( grade >= 0 && grade <= 100)
       {
            if (grade < 60) levelTemp = level[0];
            else levelTemp = level[(grade - 50)/10];
            cout << "grade = " << grade << " 转换等级为: " << levelTemp << endl;
       }
       else
           cout << "请输入合法的成绩[0, 100]" << endl;
    }

}

int main()
{
    test5_5();

    return 0;
}
