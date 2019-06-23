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
int Variable()
{
    //单行注释： 定义变量a，初始化值是10
    //定义变量就是值分配一块内存，将这块内存的名字叫做这个变量
    int a = 10;
    cout << "the value of a is ：" << a << endl;

    return 0;
}

int SizeOfFunc()
{

    cout << "size of char is :    " << sizeof(char) <<endl;
    cout << "size of integer is : " << sizeof(int) << endl;
    cout << "size of long is :    " << sizeof(long) << endl;
    cout << "size of float is :   " << sizeof(float) << endl;
    cout << "size of double is :  " << sizeof(double) <<endl;

    return 0;
}

#ifdef BASIC_CPP_CPP_INTRODUCTION
int main()
{
    Variable();
    SizeOfFunc();
    
    return 0;
}
#endif
