//
// Created by 试试帆布鞋 on 2019-08-28.
// globalvar.cpp  定义  extern double  g_x = 9.8;
// globalvar2.cpp 定义  extern dobule g_y = 100.01;
// CMakeLists.txt    add_executable(global global.cpp globalvar.cpp globalvar2.cpp)
// 关联多个cpp文件之间的变量，用 extern 关键字
//

#include <iostream>

using namespace std;

extern  double g_x;
extern  double g_y;
int main () {

    cout<<g_x<<endl;
    cout<<g_y<<endl;
    return 0;
}