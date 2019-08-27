//
// Created by 试试帆布鞋 on 2019-08-27.
//
#include <iostream>

using namespace std;

int main () {

    constexpr unsigned char option_viewed { 0x01 };
    constexpr unsigned char option_edited { 0x02 };
    constexpr unsigned char option_favorited { 0x04 };
    constexpr unsigned char option_shared { 0x08 };
    constexpr unsigned char option_deleted { 0x80 };

    unsigned char myArticleFlags {};
    // set article viewed
    myArticleFlags |= option_viewed;
    cout<< bitset<8>(myArticleFlags)<<endl;
    // check article isdelete?

    std::cout << ((myArticleFlags & option_deleted) ? "isDel": "notDel") << std::endl;
    myArticleFlags &= ~option_favorited;
    cout<< bitset<8>(myArticleFlags)<<endl;

    return 0;
}