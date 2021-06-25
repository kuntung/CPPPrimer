#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

void test4_31()
{
    cout << "练习4.31" << endl;
    
    vector<int> ivec = {1, 2, 3, 4, 5, 6};
    vector<int>::size_type cnt = ivec.size();
        
    for(vector<int>::size_type ix = 0; ix != ivec.size(); ++ix, --cnt)
    {
        ivec[ix] = cnt;

        cout << "ix = " << ix << ",cnt = " << cnt << "ivec[ix] = " << ivec[ix] << endl;
    } 
    
    cout << "后置递增递减运算符实现" << endl;
    using sizeType = vector<int>::size_type;
    
    cnt = ivec.size();
    for(sizeType ix = 0; ix != ivec.size(); ix++, cnt--)
    {
        
        ivec[ix] = cnt;
        cout << "ix = " << ix << ",cnt = " << cnt << "ivec[ix] = " << ivec[ix] << endl;
    }
}

int main()
{
    test4_31();

    return 0;
}

