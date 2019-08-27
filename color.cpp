//
// Created by 试试帆布鞋 on 2019-08-27.
//


#include <iostream>

using namespace std;

int main () {

    constexpr  unsigned  int redBits = 0xff000000;
    constexpr  unsigned  int greenBits = 0x00ff0000;
    constexpr  unsigned  int blueBits = 0x0000ff00;
    constexpr  unsigned int alphaBits = 0x000000ff;

    cout<<"Enter a 32 bit rgba color value int hexadecimal (e.g. FF7F3300 )"<<endl;
    cout<<bitset<32>(redBits)<<endl;
    cout<<bitset<32>(greenBits)<<endl;
    cout<<bitset<32>(blueBits)<<endl;
    cout<<bitset<32>(alphaBits)<<endl;
//    cout<<alphaBits<<endl;

    unsigned int pixel {};

    cin >> hex >>pixel;
    // 1. 通过与运算  过滤 指定的位
    // 2. 通过右移，移到低位上，用于显示
    unsigned char red = (pixel & redBits) >>24;
    unsigned char green = (pixel & greenBits) >> 16;
    unsigned char blue = (pixel & blueBits) >> 8;
    unsigned char alpha = pixel & alphaBits;

    cout<<"Your color contains: \n";

    cout<<hex<< static_cast<int>(red)<< " red \n";
    cout<<hex<< static_cast<int>(green)<< " green \n";
    cout<<hex<< static_cast<int>(blue)<< " blue \n";
    cout<<hex<< static_cast<int>(alpha)<< " alpha \n";
    cout<< red<<endl;
    char  a = 'a';
    cout<<hex<< static_cast<int >(a)<<endl;
    cout<<hex<< bitset<32>(a)<<endl;
    return 0;

}
