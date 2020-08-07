//
// Created by khaldi on 7‏/8‏/2020.
//
#include "Objet.h"

Objet::Objet(){
    id=0;
};
short Objet::comparisant(Objet a) {

    if (a.equals(Objet::erure() )) return  -1;
    if ( this->id == a.id ) return  0;
    if (this->id > a.id ) return 1;
    if ( this->id < a.id ) return -1 ;
};
Objet Objet::clonge() {


    Objet a;
    a.id=this->id;
    return a;

}
bool Objet::equals(Objet a)
{
    return (this->id==a.id);
}
Objet Objet::erure()
{
    Objet a;
    a.id=-1;
    return a;
}
