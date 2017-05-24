//
// Created by User on 25.05.2017.
//

#ifndef VESELO_HEAD1_H
#define VESELO_HEAD1_H
#include <cstdint>

struct element {
    element *p1;
    element *p2;
    int16_t A;
};
element *collection (element *p);
element *add_back(element *p);
void check(element *p,int16_t vvod);

#endif //VESELO_HEAD1_H
