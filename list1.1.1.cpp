#include <iostream>

int main()
{
    int a(42);　//aは42で初期化される
    a=ø;// aの中身はøになる(=は代入)
    const int b=1; //bはずっと１
    b=2;//エラー。constにはもう代入できない
}
