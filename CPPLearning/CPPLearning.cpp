﻿// CPPLearning.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//deleration这个symble/function存在，defination这个funciton具体是干嘛的

#include <iostream> //# is preprocessor state, include is find a file, which called iostream, and copy paste in this one
using namespace std;
void Sign(const char*);

int main()//no need to return any value for main function
{
    std::cout << "HEy\n";
    Sign("Hello World!");  
    int year;
    bool isLeapYear;

    cout << "Please enter the year: "; 
    cin >> year;
    isLeapYear = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));

    if (isLeapYear)
        cout << year << " is a leap year" << endl;
    else
        cout << year << " is not a leap year" << endl;

    std::cin.get();
    return 0;

}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单
//ctl+F7 is compile

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
