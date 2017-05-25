#include <iostream>
#include "head1.h"
int raz;
int main() {
    raz=0;
    //int n=rand()%25+10;
    //printf("Элементов в коллекции %d штук \n", n);
    element *p = ( element* ) malloc(sizeof(element));
    p=Init(p);
    printf("%lf\n",p->A);

    double k=static_cast<double >(rand()%114)+static_cast<double >(rand()%565)/1000;
    printf("%lf\n",k);
    element *new_element=( element* ) malloc(sizeof(element));;
    new_element=insert(p,k);

    k = static_cast<double >(rand() % 114) + static_cast<double >(rand() % 565) / 1000;
    printf("%lf\n", k);
        // new_element=insert2(p,p->next,k);
    new_element = insert2(new_element, new_element->next, k);
    new_element=new_element->next;
    schet(new_element);

    element* d = new_element;
    while(d!=0)
    {
        printf("%lf\n",d->A);
        d=d->previous;
    }


    new_element = insert2(new_element->previous, new_element, 76);
    new_element=new_element->next;
    d = new_element;
    while(d!=0)
    {
        printf("%lf\n",d->A);
        d=d->previous;
    }
    printf("Кол-во элементов в коллекции: %d\n", raz);
        return 0;
}