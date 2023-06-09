//
// Created by lin on 23-6-9.
//

#include "pointer.h"
#include <iostream>

void PointerMain() {
    int c[4] = {0x8000, 0xFFFF, 0x0000, 0x7FFF};
    int *a[4];   // array of pointers     指针的数据
    int (*b)[4]; // a pointer to an array 数组的指针
    b = &c;

    for (int i = 0; i < 4; ++i) {
        a[i] = &(c[i]);
    }

    std::cout << *(a[0])  << std::endl;
    std::cout << (*b)[0]  << std::endl;

}