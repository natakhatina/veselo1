#include <iostream>
#include "head1.h"
extern int raz;
element *Init(element *p){
    raz++;
    element *P=(element*)malloc(sizeof(element));
    P->A=static_cast<double>(rand()%114)+static_cast<double >(rand()%565)/1000;
    //printf("%lf\n",P->A);
    P->previous=0;
    P->next=0;
    return P;
}


element *insert(element *p,double k){
raz++;
    element *new_element = ( element* ) malloc(sizeof(element));
    new_element->A=k;
    new_element->previous=0;
    new_element->next=0;
    if(k>(p->A)){
       p->next=new_element;
       new_element->previous=p;
        return p;
    }
    else {
        p->previous=new_element;
        new_element->next=p;
        return new_element;
    }

}

/*element *insert2(element *p,element *d,double k){
    raz++;
    element *new_element = ( element* ) malloc(sizeof(element));
    new_element->A=k;
    new_element->previous=0;
    new_element->next=0;
    if (k<(p->A)){
        new_element->next=p;
        p->previous=new_element;
        return p;
    }
    if (k>(d->A)){
        new_element->previous=d;
        d->next=new_element;
        return d;
    }
    if ((k>(p->A))&&(k<(d->A))){
        p->next=new_element;
        d->previous=new_element;
        new_element->previous=p;
        new_element->next=d;
        return new_element;
    }
    else {
        d->next=new_element;
        p->previous=new_element;
        new_element->previous=d;
        new_element->next=p;
        return new_element;
    }
}*/
void schet(element *new_element){
    int i=0;
    do {
        i++;
        new_element = new_element->previous;
    }while (new_element!=0);
    printf ("кол-во:%d\n",i);
}


element *insert2(element *p,element *d,double k) {
    raz++;
    element *new_element = (element *) malloc(sizeof(element));
    new_element->A = k;
    new_element->previous = 0;
    new_element->next = 0;
    if (k>(d->A)){
        new_element->previous=d;
        d->next=new_element;
        return d;
    }
    else {
        int i=0;
        while (k<(p->A))
        {   new_element->next=p;
            new_element->previous=p->previous;
            p->previous->next=new_element;
            p->previous=new_element;
            i++;
            p=p->previous;
        }
        return d->previous;
    }
}