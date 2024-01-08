//check1

#include<iostream>

int main()
{
    std::cout<<"hello,message"<<std::endl;
}

//check2
//浮動小数点数とは、float,double,long double型で扱える量であり、intと異なって任意の実数を与えられる。しかし、精度はintのときより落ちる
//任意の実数は各kについて(-1)^s*2^kの和で表せる。（sは符号を与える）結局、floatは近似値。

//check3
//if{}else{if{}...}のような構文にせず、else if(a)のようにelseif構文と捉えると、インデントが揃って、対応する条件/処理が見やすくなる

//check4

#include<iostream>

int main()
{
    std::string a="Hello";
    std::cout<<a[0]<<std::endl;
    std::cout<<a[1]<<std::endl;
    std::cout<<a[2]<<std::endl;
    std::cout<<a[100]<<std::endl;
}
