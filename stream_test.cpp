//
// Created by lin on 2023/5/25.
//

#include "stream_test.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

/*
和 ifstream 一样用
ios_base::in	以读的方式打开文件
ios_base::out	以写的方式打开文件
ios_base::ate	打开文件，并移到文件尾
ios_base::app	追加到文件尾
ios_base::trunc	如果文件存在，则截断文件(删除原有内容)
ios_base::binary	二进制文件
 * */

void STest1() {
    int x, y;
    std::string fpath = "../data/stream_data.txt";
    std::ofstream fout(fpath, std::fstream::binary | std::fstream::out);
    fout << 12 << ", " << 34.5 << ", lin" << std::endl;
    fout.close();

    std::ifstream fin(fpath, std::ifstream::in);
    fin >> x;
    fin >> y;
    fin.close();
    std::cout << "x: " << x << " - y: " << y << std::endl;

    std::ifstream fin2(fpath);
    std::string line;
    getline(fin2, line);
    std::cout << line << std::endl;

}

void STest2() {
    int num;
    std::cout << "Please enter a num: ";
    std::cin >> num;
    std::cout << "The num is: " << num << std::endl;
}

void STest3() {
    std::string fpath = "../data/log_230509_151846.csv";
    std::ifstream fin(fpath, std::ifstream::in);

    std::string line;
    getline(fin, line);
    while (getline(fin, line) ) {
        std::istringstream is(line);
        std::cout << "is: " << is.str() << std::endl;
        std::string word;
        while (getline(is, word,',')) {
            std::cout << word << std::endl;
        }

        break;
    }

    std::ifstream input(fpath, std::ios::in);
    std::cout << "good: " << input.good() << std::endl;
    std::cout << "is_open: " << input.is_open() << std::endl;


}


void StreamTestMain() {
    STest3();
}