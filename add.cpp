#include <iostream>
#include "head1.h"
/*void add(element *p){
    p->A=static_cast<int16_t >(rand());
    p->p1=p-1;
    p->p2=0;
    p--;
    p->p2=p+1;
}*/
element *collection (element *p){
    element *P=(element*)malloc(sizeof(element));
    P->A=static_cast<int16_t >(rand());
    P->p1=p-1;
    P->p2=p+1;
    return P;
}
element *add_back(element *p){
    element *P=(element*)malloc(sizeof(element));
    p->p2=P;
    P->A=static_cast<int16_t >(rand());
    P->p1=p;
    P->p2=p+1;
    return P;
}
void check(element *p,int16_t vvod) {
    if ((p->A)==vvod)
        printf("Such element exists\n");
    else{
        int k=0;
        element *d = ( element* ) malloc(sizeof(element));
        d=p->p1;
        while ((k==0)&&((d->p1)!=0)) {
            if ((d->A) == vvod) {
                k = k + 1;
            }
            else {
                k=0;
                d = d->p1;
            }
        }
        if (k==0)
            printf("Such element does not exist\n");
        else
            printf("Such element exists\n");
        free(d);
    }
}