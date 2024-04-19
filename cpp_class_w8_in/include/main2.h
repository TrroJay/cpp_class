//
// Created by 31227 on 2024/4/17.
//

#ifndef CPP_CLASS_W7_IN_MAIN2_H
#define CPP_CLASS_W7_IN_MAIN2_H

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

// TODO: 补全TimeParser类并实现以下函数
class TimeParser {
    string s1;
    int right=1;
    string sH;
    string sM;
    string sS;
    int num[3]={0};
public:
    TimeParser(string s);  // 有参构造函数
    int getHour(); // 返回时
    int getMin(); // 返回分
    int getSec(); // 返回秒
};

// 你可以使用下面的main函数自己测试输入用例
//
// int main() {
//   std::string s;
//   std::cin >> s;
//   TimeParser tp(s);
//
//   std::cout << tp.getHour() << ' ';
//   std::cout << tp.getMin() << ' ';
//   std::cout << tp.getSec() << endl;
//
//   return 0;
// }

#endif //CPP_CLASS_W7_IN_MAIN2_H
