//
// Created by khaldi on 24‏/7‏/2020.
//
#include "Objet.h"
#ifndef LINKEDLISTE_DEV_NODE_H
#define LINKEDLISTE_DEV_NODE_H

class Node {
public:

     Objet data;
    Node* next;

    Node(){

        next=NULL;
    }

};


#endif //LINKEDLISTE_DEV_NODE_H
