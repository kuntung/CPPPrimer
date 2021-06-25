# 一些想法测试案例

1. 变量定义的方式
```c++
int* p1, p2; // 测试p2是否也是指针
// 结果就是：p2不是指针，类型修饰符*,&只能作用于一个对象
```

2. `++*iter`的含义(来源：4.6节练习)
> 这样会报错，error: no match for ‘operator++’ (operand type is ‘std::basic_string<char>’)
> 因为，这时候会对string类型做++，而string类型并没有实现`++`
