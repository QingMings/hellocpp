//
// Created by 试试帆布鞋 on 2019-08-27.
//

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

void printBinary(int num, int power){
    if (num <0 || power<1){
        return;
    }
    if(power==8){
        cout<<" ";
    }
    if (num >= power){
        cout<<1;
        printBinary(num-power,power/2);
    } else {
        cout<<0;
        printBinary(num,power/2);
    }
}

int main () {
    /*
    cout<< sizeof(unsigned char)<<endl;
    std::cout << sizeof(char*) << std::endl;
    std::cout << sizeof(int) << std::endl;
    std::cout << sizeof(short int ) << std::endl;
    std::cout << sizeof(unsigned int ) << std::endl;
    std::cout << sizeof(float ) << std::endl;
    std::cout << sizeof(double ) << std::endl;
    std::cout << sizeof(long ) << std::endl;
    std::cout << sizeof(unsigned long  ) << std::endl;
    std::cout << sizeof(long long) << std::endl;
    // long 保证至少 32位
    // long long 至少保证 64位
    */

    /*
    // 首先看到是有符号的整型
    // 最高位为符号位
    // 既存的是补码  10011110
    // 然后翻转位    01100001
    // 添加1        01100010
   unsigned int num = 0b1001'1110;
    cout<<bitset<32>(num)<<endl;
    std::cout << num << std::endl;
    num = ~num;
    cout<<bitset<32>(num)<<endl;
    std::cout << num << std::endl;
    num = num +1;
    cout<<bitset<32>(num)<<endl;
    std::cout << num << std::endl;
    std::cout << 1*0 + 2*1 + 4*0 + 8*0 + 16 * 0 + 32 *1 + 64*1 + 128 *0 << std::endl;
     */

    /*
    // 将 01001101 转化为10进制数
    // 首先最高位符号位 是0
    // 是源码
    // 从低到高  1*1 + 2*0 + 4 * 1 + 8 * 1 + 16 * 0 + 32 * 0 + 64 * 1
    // = 77
    int b = 0b01001101;
    std::cout << b << std::endl;
    // 将 11001101 转化为10进制数
    // 首先最高位符号位 是1
    // 存的是补码
    // 翻转 所有位  00110010
    // +1          00110011
    // 从低到高  1*1 + 2*1 + 4*0 + 8*0 + 16*1 + 32*1 + 64*0
    // =51
    // 符号位为 1
    // 结果为 -51；
    int8_t  c = 0b11001101;
    std::cout << static_cast<int>(c) << std::endl;
    std::cout << "----------------------" << std::endl;

    // 将 10011110 转换为 10进制数
    // 最高位符号位为1
    // 是补码
    // 全部取反   01100001
    // +1        01100010
    // 从低到高   1*0 + 2*1 + 4*0 + 8*0 + 16*0 + 32 *1 + 64*1
    // = 98
    // 符号位为 1
    // 结果为 -98
    int8_t f = 0b1001'1110;
    std::cout << static_cast<int>(f) << std::endl;
    */

    /*
    int g = -93;
    cout<<bitset<8>(g)<<endl;
     */
    /*
    // 将 10100010 转换为 十进制数
    // 分析 符号位 为1 ，
    // 取反   01011101
    // +1     01011110
    // 从低到高 1*0 + 2*1 + 4 *1 + 8* 1 + 16*1 + 32*0 + 64*1
    // = 94
    // 符号位为1
    // 结果是 -94
    // 如果是转换为无符号 10进制
    // 1* 128 + 32*1 + 2*1
    // 162
    int8_t h = 0b10100010;
    std::cout << static_cast<int>(h) << std::endl;
    int  i = 0b10100010;
    std::cout << i<< std::endl;
     */

    // 04 homework6
    cout<<"输入0~255之间的数字，输出8位二进制数字，不可以使用位运算符"<<endl;

    int j;
    cin>>j;
    while(j<0 || j>255) {
        cout<<"输入数字不合法，请重新输入："<<endl;
        cin>>j;
    }
    printBinary(j,128);
    return 0;
}