//
// Created by khaldi on 24‏/7‏/2020.
//
#include <iostream>

using namespace std;

#include "Objet.h"
#include "Node.h"
#ifndef LINKEDLISTE_DEV_LINKEDLISTE_H
#define LINKEDLISTE_DEV_LINKEDLISTE_H





 class LinkedListe {

 private:
    Node* tete;
 public:
     int size();
     void clear();
     void addFirst(Objet* );
     void addFirst(Objet  );
     void  addLast(Objet * );
     void  addLast(Objet );
     void add(int , Objet* );
     void add(int , Objet );
     bool contains(Objet );
     void printList();
     void coutinsert(int );
     Objet getFirst();
     Objet getLast() ;
     Objet get(int );
     int indexOf(Objet);
     int lastIndexOf(Objet );
     Objet pop();
     inline void push(Objet );
     Objet remove();
     Objet remove(Objet );
     Objet  remove(int );
     Objet removeFirst();
     Objet removeLaste();
     int removlasteOccurence(Objet );
     bool isEmpty();
     void insertordre(Objet );
     public:

     LinkedListe(){
        tete=NULL;

    }
     private:
     void addFirst(Node& ) ;
     void addLast(Node &);
     Objet deleted(Node* &);
     void permut(Node* &);
 };


#endif //LINKEDLISTE_DEV_LINKEDLISTE_H
