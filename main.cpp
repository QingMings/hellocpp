//
// Created by 试试帆布鞋 on 2019-08-23.
//

#include<iostream>
#include <bitset>
using namespace std;

void printbyBitSet(int8_t target){
    cout<<bitset<8>(target)<<endl;
}
int main (){
   // 01
   /*
    bitset<8> bits(0b0000'0101);
    bits.set(3);
    bits.flip(4);
    bits.reset(4);

    cout<<" all the bits" <<bits<<endl;
    cout<< " Bit 3 has value:" <<bits.test(3)<<endl;
    cout<< " Bit 4 has value:" <<bits.test(4)<<endl;

    */

   //02 位运算 左移  <<
   /*
   int8_t  a = 0b0000'0001;
   int8_t  b = a<<2;
   cout<<signed(a)<<endl;
    std::cout << signed(b) << std::endl;
    // 输出 2进制的标识
   printbyBitSet(a);
   printbyBitSet(b);
    */

   // 位运算左移 练习
    /*
    int8_t c = 0b0000'0011;
    int8_t d = c <<1; // 左移1位 0000'0110
    int8_t e = c <<2; // 左移2位 0000'1100
    int8_t f = c <<3; // 左移2位 0001'1000
    printbyBitSet(c);
    printbyBitSet(d);
    printbyBitSet(e);
    printbyBitSet(f);
    */

   // 位运算 右移  >>
    /*
   int8_t g = 0b0000'1100;
   int8_t h = g>> 1; // 右移一位 0000'0110
   printbyBitSet(g);
   printbyBitSet(h);

    int8_t i = g>> 2; // 右移二位 0000'0011
    int8_t j = g>> 3; // 右移三位 0000'0001
    printbyBitSet(i);
    printbyBitSet(j);
     */

    // 使用 bitset<4> 练习 左移右移
    /*
    bitset<4> bit4=0b0011;
    cout<< (bit4<<1)<< endl;  // 左移1位  0110
    cout<< (bit4<<2)<< endl;  // 左移2位  1100
    cout<< (bit4<<3)<< endl;  // 左移3位  1000


    bitset<4> bit5 = 0b1100;
    cout<<(bit5>>1)<<endl; // 右移1位  0110
    cout<<(bit5>>2)<<endl; // 右移2位  0011
    cout<<(bit5>>3)<<endl; // 右移3位  0001
     */

    // 按位取反 ~
    /*
    bitset<4> bitset6 = 0b0001;
    cout<<(bitset6)<<endl;  // 0001
    cout<<(~bitset6)<<endl; // 1110
    bitset<8> bitset7 = 0b0100;
    cout<<(bitset7)<<endl;  // 00000100
    cout<<(~bitset7)<<endl; // 11111011
     */

    // 按位 或 '|'  【两个位上有全为真或有一个为真 结果既为真】

    /*
    bitset<4> bitset8 =0b0101;  // 0101
    bitset<4> bitset9 = 0b0110; // 0110
    cout<<(bitset8| bitset9)<<endl; // 0111;
    */

    // 按位 与 &    【两个位上都为真既为真】
    /*
    bitset<4> bitset10 = 0b0101; //0101
    bitset<4> bitset11 = 0b0110; //0110
    cout<< (bitset10 & bitset11) <<endl; //0100;
    */

    // 按位 异或(XOR)  ^ 【两个位上有且只有一个位上为真才为真】
    /*
    bitset<4> bitset12 = 0b0001;          // 0001
    bitset<4> bitset13 = 0b0011;          // 0011;
    cout<<(bitset12 ^ bitset13) <<endl;   // 0010;

     */

    // 按位赋值 运算符
    // 1. 左移分配 <<=
    // 2. 右移分配 >>=
    // 3. 按位或赋值 |=
    // 4. 按位与赋值 &=
    // 5. 按位异或分配 ^=

    /*
    bitset<4> bitset14 =0b0101; // 0101
    cout<<"原始："<<bitset14<<endl;
    bitset14<<=1;               // 左移并赋值 1010
    cout<<"左移并赋值："<< bitset14<<endl;
    bitset14>>=1;               // 右移并赋值 0101
    cout<<"右移并赋值："<< bitset14<<endl;
    // 0101 （一个操作数或两个操作数为真，既为真）
    bitset14 |= 0b0011;    // 按位或   0111
    cout <<"按位或 赋值：" <<bitset14<<endl;
    // 0111 （两个操作数都为真，才为真）
    bitset14 &= 0b0010; // 按位与    0010
    cout<<"按位与 赋值："<<bitset14<<endl;

    // 0010 （有且只有一个操作数为真才为真）
    bitset14 ^= 0b0111; // 按位异或  0101
    cout<< "按位异或赋值："<< bitset14<<endl;
     */

    // 掩码

    constexpr unsigned char mask0 { 0b0000'0001};
    constexpr unsigned char mask1 { 0b0000'0010};
    constexpr unsigned char mask2 { 0b0000'0100};
    constexpr unsigned char mask3 { 0b0000'1000};
    constexpr unsigned char mask4 { 0b0001'0000};
    constexpr unsigned char mask5 { 0b0010'0000};
    constexpr unsigned char mask6 { 0b0100'0000};
    constexpr unsigned char mask7 { 0b1000'0000};
/*
    unsigned char flags { 0b0000'0101};
    cout<<"flags 初始值:" << bitset<8>(flags)<<endl;
    // 使用 & 与运算符 检查 某一位的状态
    cout<< "bit 0 is " << ((flags & mask0) ? "on \n": "off\n");

    // 使用 |= 操作 改变 bit1 的值
    flags |= mask1;
    cout<<"turn on bit 1"<<endl;
    cout<< "now ,bit 1 is "<< ((flags & mask1)? "on \n": "off\n");

    cout<<"flags 当前值:" << bitset<8>(flags)<<endl;

    cout<<"-----------------------------------------------"<<endl;

    cout<<"bit 4 is "<<((flags & mask4) ? "on \n": "off\n");
    cout<<"bit 5 is "<<((flags & mask5) ? "on \n": "off\n");
    cout<< "turn on bit 4 and bit 5 at same time "<<endl;
    flags |= (mask4 | mask5);
    cout<<"now bit 4 is "<<((flags & mask4) ? "on \n": "off\n");
    cout<<"now bit 5 is "<<((flags & mask5) ? "on \n": "off\n");
    cout<<"flags 当前值:" << bitset<8>(flags)<<endl;

    cout<<"-----------------------------------------------"<<endl;

    cout<<"reset bit 2 off";
    cout<< "bit 2 is " << ((flags & mask4) ? "on \n": "off\n");
    //  turn off bit 2
    //  ~mask2   11111011;
    //  00110111 & 11111011  ==>  00110011
    flags &= ~mask2;
    cout<<"flags 当前值:" << bitset<8>(flags)<<endl;

    cout<<"-----------------------------------------------"<<endl;
    // 同时关闭多个位
    // turn off bit4 and bit5 at same time

    cout<< "will turn of bit 4 and bit 5"<<endl;

    cout<<"bit 4 is "<<((flags & mask4) ? "on \n": "off\n");
    cout<<"bit 5 is "<<((flags & mask5) ? "on \n": "off\n");
    cout<< "turn off bit 4 and bit 5 at same time "<<endl;
    flags &= ~(mask4 | mask5);
    cout<<"now bit 4 is "<<((flags & mask4) ? "on \n": "off\n");
    cout<<"now bit 5 is "<<((flags & mask5) ? "on \n": "off\n");
    cout<<"flags 当前值:" << bitset<8>(flags)<<endl;

    cout<<"-----------------------------------------------"<<endl;

    // 改变位的状态
    // toggle bit status
    cout<<"改变为状态,本来开，操作后变关，本来关，操作后变开"<<endl;
    cout<< "toggle bit 1 status "<<endl;
    cout<< "bit 1 is " << ((flags & mask1) ? "on \n": "off\n");
    flags ^= mask1;
    cout<< "now ,bit 1 is "<< ((flags & mask1)? "on \n": "off\n");
    cout<<"flags 当前值:" << bitset<8>(flags)<<endl;
    cout<< "toggle bit 1 status again"<<endl;
    cout<< "bit 1 is " << ((flags & mask1) ? "on \n": "off\n");
    flags ^= mask1;
    cout<< "now ,bit 1 is "<< ((flags & mask1)? "on \n": "off\n");
    cout<<"flags 当前值:" << bitset<8>(flags)<<endl;

    cout<<"-----------------------------------------------"<<endl;

    // 同时翻转多个位
    // toggle multi bit status
    cout<<"toggle multi bit status : bit 4 and bit 5"<<endl;
    cout<<"bit 4 is "<<((flags & mask4) ? "on \n": "off\n");
    cout<<"bit 5 is "<<((flags & mask5) ? "on \n": "off\n");
    flags ^= (mask4 | mask5);
    cout<<"now bit 4 is "<<((flags & mask4) );
    cout<<"now bit 5 is "<<((flags & mask5) ? "on \n": "off\n");
    cout<<"flags 当前值:" << bitset<8>(flags)<<endl;
    cout<<"toggle multi bit status again : bit 4 and bit 5"<<endl;
    cout<<"bit 4 is "<<((flags & mask4) ? "on \n": "off\n");
    cout<<"bit 5 is "<<((flags & mask5) ? "on \n": "off\n");
    flags ^= (mask4 | mask5);
    cout<<"now bit 4 is "<<((flags & mask4) ? "on \n": "off\n");
    cout<<"now bit 5 is "<<((flags & mask5) ? "on \n": "off\n");
    cout<<"flags 当前值:" << bitset<8>(flags)<<endl;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"总结："<<endl;
    cout<<"1. 检查一位 用 & 和掩码"<<endl;
    cout<<"2. turn on一位 用 |= 和掩码" <<endl;
    cout<<"3. turn off一位 用 &= 和掩码取反"<<endl;
    cout<<"4. toggle 一位 用 ^= 和掩码"<<endl;

    */
    cout<<"-----------------------------------------------"<<endl;
    cout<<"bitset 支持全部的位操作"<<endl;
    cout<<"test()  返回该位上是 0还是1"<<endl;
    
    bitset<8> bitsetFlags {0b0000'0101};

    cout<<"bitsetFlags 当前值："<< bitsetFlags<<endl;
    std::cout << "bit 0 is is "<< (bitsetFlags.test(0)? "on \n": "off\n");
    std::cout << "bit 1 is is "<< (bitsetFlags.test(1)? "on \n": "off\n");
    std::cout << "bit 2 is is "<< (bitsetFlags.test(2)? "on \n": "off\n");
    bitsetFlags ^=  mask2;
    cout<< bitsetFlags<<endl;
    std::cout << "bit 0 is is "<< (bitsetFlags.test(0)? "on \n": "off\n");
    std::cout << "bit 1 is is "<< (bitsetFlags.test(1)? "on \n": "off\n");
    std::cout << "bit 2 is is "<< (bitsetFlags.test(2)? "on \n": "off\n");
    bitsetFlags.flip(0);
    std::cout << "bitsetFlags flip bit 0" << std::endl;
    std::cout << "bit 0 is is "<< (bitsetFlags.test(0)? "on \n": "off\n");


    return 0;

}