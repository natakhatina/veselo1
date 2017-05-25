//
// Created by User on 25.05.2017.
//

#ifndef VESELO_HEAD1_H
#define VESELO_HEAD1_H
#include <cstdint>

struct element {
    element *previous;
    element *next;
    double A;
};

element *Init(element *p);
element *insert(element *p,double k);
element *insert2(element *p,element *d,double k);
void schet(element *new_element);

#endif //VESELO_HEAD1_H
