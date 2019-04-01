//
// Created by WangSenbo on 2019-04-01.
//
#include <iostream>
#include "basic_cpp.h"

using namespace std;


/*
 * 这是多行注释
 * 变量的示意
 * */
int variable()
{
    //单行注释： 定义变量a，初始化值是10
    //定义变量就是值分配一块内存，将这块内存的名字叫做这个变量
    int a = 10;
    cout << "变量a的值是：" << a << endl;

    return 0;
}

#ifdef BASIC_CPP_CPP_INTRODUCTION
int main()
{
    variable();
    return 0;
}
#endif
