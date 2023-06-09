//
// Created by lin on 2023/5/26.
//
#include "std_test.h"
#include <string>
#include <iostream>
#include <algorithm>
#include <istream>


// 表示1、2范围的数据，和从3开始的数据是否相同。
void StdTest1() {
    std::string line = "a new chapter in the progress of civilizations in a multipolar world";
    std::string str = "world";
    std::string str2 = "new";

    bool ret = std::equal(str.rbegin(), str.rend(), line.rbegin());
    std::cout << "ret: " << ret << std::endl;

    bool ret2 = std::equal(str2.begin(), str2.end(), line.begin()+2);
    std::cout << "ret2: " << ret2 << std::endl;
}

void STDTestMain() {
    StdTest1();
}