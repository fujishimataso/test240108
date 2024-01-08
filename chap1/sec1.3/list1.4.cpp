#include <iostream>

int main()
{
    int i = 42;

    std::cout << "sizeof(i): " << sizeof(i) << std::endl;

    std::cout << "sizeof(i + 1): " << sizeof(i + 1) << std::endl;
}

//sizeof演算子で、入力量に何biteさいてるか分かる（1bite=8bit）
