#include <iostream>
#include "head1.h"

int main() {
    int n=rand()%25+10;
    printf("Элементов в коллекции %d штук \n", n);
    element *p = ( element* ) malloc(sizeof(element));
    p->A=static_cast<int16_t >(rand());
    p->p1=0;
    p->p2=p+1;
    printf("%hd\n",p->A);
    for (int i = 1; i < n-2; i++){
       p=collection(p);
        printf("%hd\n",p->A);
    }
    p = ( element* ) malloc(sizeof(element));
    p->A=static_cast<int16_t >(rand());
    p->p1=p-1;
    p->p2=0;
    printf("%hd\n",p->A);
    p=add_back(p);
    printf("%hd\n",p->A);
    int16_t vvod;
    printf("введите число, которое нужно проверить:");
    scanf ("%hd\n", &vvod);
    check(p,vvod);


        return 0;
}