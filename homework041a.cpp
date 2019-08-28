//
// Created by 试试帆布鞋 on 2019-08-28.
//

#include <iostream>

using namespace std;

int main() {


    cout << "请输入一个整数" << endl;

    int num1;
    cin >> num1;
    cout << "请输入另一个更大的整数：" << endl;
    int num2;
    cin >> num2;
    int smaller, larger;
    if (num1 < num2) {
        larger = num2;
        smaller = num1;
    } else {
         smaller = num2;
         larger = num1;
    }
    cout<< "较小的：" << smaller<<endl;
    cout<< "较大的：" << larger<<endl;

    return 0;

}
