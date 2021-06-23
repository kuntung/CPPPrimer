#include <iostream>

 int a[2][3] = { {1, 2, 3}, {4, 5, 6} };
void test3_34()
{
  for (const int (&row) [3] : a) {
    for (const int col : row) {
      std::cout << col << " ";
    }
  }
  std::cout << std::endl;
  // 练习 3.43 普通 for 下标
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < 3; ++j) {
      std::cout << a[i][j] << " ";
    }
  }
  std::cout << std::endl;
  // 练习 3.43 普通 for 指针
  for (int(*p)[3] = a; p != a + 2; ++p) {
    for (int *q = *p; q != *p + 3; ++q) {
      std::cout << *q << " ";
    }
  }
}

void test3_35()
{
  for (auto &row : a) {
    for (auto col : row) {
      std::cout << col << " ";
    }
  }
  std::cout << std::endl;
  // 练习 3.45 普通 for 下标
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < 3; ++j) {
      std::cout << a[i][j] << " ";
    }
  }
  std::cout << std::endl;
  // 练习 3.45 普通 for 指针
  for (auto p = a; p != a + 2; ++p) {
    for (int *q = *p; q != *p + 3; ++q) {
      std::cout << *q << " ";
    }
  }
}

int main()
{
   test3_34();
   test3_35();

   return 0;
}