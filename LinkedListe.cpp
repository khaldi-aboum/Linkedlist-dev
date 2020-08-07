#include <iostream>
#include "LinkedListe.h"
#include "Node.h"

#include "Objet.h"
#include "LinkedListe.h"
//
// Created by khaldi on 7‏/8‏/2020.

//


 int LinkedListe::size() {
    int i = 0;
    Node *v = tete;

    while (v != NULL) {

        v = v->next;
        i++;

    }

    return i;

}
void LinkedListe::clear() {
    if (tete == NULL) return;

    if (tete->next == NULL) {
        delete tete;
        tete = NULL;
        return;
    }

    {
        Node *v1, *v2;
        v1 = tete;
        v2 = tete->next;

        while (v2 != NULL) {
            delete v1;
            v1 = v2;
            v2 = v2->next;

        }
        delete v1;

        tete = NULL;

    }


}
void LinkedListe::addFirst (Objet *data) {
    if (data == NULL) {cout<<"erur"<<endl;  return;}
    addFirst(*data);
}
void LinkedListe::addFirst(Objet data) {
    Node *v = new Node();

    v->data = data;
    v->next = tete;
    tete = v;
    return;

}
void LinkedListe::addLast(Objet a)
{
    if (tete == NULL) { return addFirst(a); }

    Node* e=new Node();
    e->data=a;

    Node *v = tete;
    while (v->next != NULL) v = v->next;

    v->next = e;
}
void LinkedListe::addLast(Objet *a) {

    if (a==NULL) {cout<< "erour"<<endl;return;}
    addLast(*a);

}
void  LinkedListe::add(int index, Objet* a)
{
    if (a==NULL) {
        cout<<"erour"<<endl;
        return;
    };

    add(index,(*a));

}
void LinkedListe::add(int index, Objet a)
{

    if (index == 0) {addFirst(a);return;}

    Node *e=new Node();
    e->next=NULL;
    e->data=a;

    if (tete != NULL) {



        Node *v;
        v = tete;
        int i;
        cout<<""<<endl;
        for (i = 1; ((i < index) && (v->next != NULL)); i++) {
            v = v->next;
        }


        if (i == index) {
            e->next = v->next;
            v->next = e;
            return;
        }


        cout<<"/n over ouding" <<endl;
        return;


    }
}
bool LinkedListe::contains(Objet data) {
    if (tete == NULL) return false;
    Node *v = tete;
    while ((!(v->data.equals(data)))&&(v->next!=NULL)) v = v->next;

    return v->data.equals(data);
}
void LinkedListe::printList() {
    Node *v = tete;

    if (v == NULL) std::cout << "la liste est vide" << endl;

    while (v != NULL) {
        std::cout << v->data.id << endl;
        v = v->next;

    }

}
void LinkedListe::coutinsert(int nb) {
    Objet a;
    for (int i = 0; i < nb; i++) {
        std::cout << "le element n" << i << " est :";
        std:
        cin >> a.id;

        addFirst(a);
        std::cout << endl;

    }

}
Objet LinkedListe::getFirst() {

    if (tete == NULL) return Objet::erure()  ;
    return tete->data;
}
Objet LinkedListe::getLast() {
    if (tete == NULL) return Objet::erure();
    Node *v;
    v = tete;
    while (v->next != NULL) v = v->next;
    return v->data;
}
Objet LinkedListe::get(int index) {
    //if (index >= this->length()) return Objet::erure();
    if (tete == NULL) return Objet::erure();
    //if (index == 0) return this->getFirst();

    {
        Node *v = tete;
        int i;
        for ( i = 0; ((i < index)&&(v != NULL)) ; i++) v = v->next;
        if (v==NULL) return Objet::erure();
        return v->data;

    }
}
int LinkedListe::indexOf(Objet data)
{
    if (tete == NULL ) { return -1; }
    Node* v=tete;
    int i=0;
    while(v != NULL)

    {
        if (v->data.equals(data)) return i;
        i++;
        v=v->next;
    }
    return -1;

}
int LinkedListe::lastIndexOf(Objet data)
{
    if (tete == NULL ) { return -1; }

    Node* v=tete;
    int histo = -1;
    int i=0;
    while(v != NULL)

    {
        if ( v->data.equals(data) ) histo=i;
        i++;
        v=v->next;
    }
    return histo;

}
Objet LinkedListe::pop(){
    if (tete == NULL) return Objet::erure();
    Node *v=tete;
    Objet a=v->data;
    tete=tete->next;
    delete v;
    return (a);

}
inline void LinkedListe::push(Objet data)
{
    addFirst(data);
}
Objet LinkedListe::remove()
{
    if (tete == NULL) return Objet::erure();
    Node *v=tete;
    Objet a=v->data;
    tete=tete->next;
    delete v;
    return (a);
}
Objet LinkedListe::remove(Objet data){

    if (tete == NULL ) { return Objet::erure(); }
    Node* v=tete;
    if( v->data.equals(data)) {return remove(); }
    int i=1;
    while(v->next != NULL)

    {
        if (v->next->data.equals(data)) return deleted(v->next)  ;
        i++;
        v=v->next;
    }
    return Objet::erure();
}
Objet  LinkedListe::remove(int index){
    //if (index >= this->length()) return Objet::erure();
    if (tete == NULL) return Objet::erure();
    //if (index == 0) return this->getFirst();
    if (index == 0) return remove() ;


    Node *v = tete;
    int i;
    for ( i = 1; ((i < index)&&(v->next != NULL)) ; i++) v = v->next;
    if (v->next==NULL) return Objet::erure();
    return deleted(v->next);




}
Objet LinkedListe::removeFirst()
{
    return remove();
}
Objet LinkedListe::removeLaste()
{
    Node* v=tete;
    if (v == NULL) return Objet::erure();
    if (v->next == NULL) return remove();
    while (v->next->next != NULL ) v=v->next;
    return deleted(v->next);


}
int LinkedListe::removlasteOccurence(Objet data)
{
    if (tete == NULL ) { return -1;}

    Node* v=tete;
    Node* histo = NULL;
    int i=-1;
    while(v->next != NULL)

    {
        if ( v->next->data.equals(data) ) {histo=v; i++; }

        v=v->next;
    }
    if (histo == NULL ) return -1 ;
    deleted(histo->next);
    return i;

}
bool LinkedListe::isEmpty()
{
    return (tete ==   NULL );
}
void LinkedListe::insertordre(Objet data)
{

    if (isEmpty()) { addFirst(data);return;}
    if (data.comparisant(tete->data) == -1) {addFirst(data);return;}

    Node *node,*v,*p;

    node= new Node();
    v=tete;

    node->data=data;

    while (v->next->next != NULL)
    {

        if (data.comparisant(v->next->data) == -1)   {
            p=v->next;
            v->next=node;
            node->next=p;
            return;
        }

        v=v->next;
    }

    addLast(data);
    return;
}
void LinkedListe::addFirst(Node &n1) {
    n1.next=tete;
    tete=&n1;
}
void LinkedListe::addLast(Node &n1)
{

    Node* v=tete;
    n1.next=NULL;
    while (v->next != NULL) v=v->next;

    v->next=&n1;
}
Objet LinkedListe::deleted(Node* &p)

{
    if (tete == NULL) return Objet::erure();
    Objet a;
    Node *v;
    if (p==tete)
    {
        v=tete;
        a=v->data;
        tete=tete->next;
        delete v;
        return a;
    }
    v=p;
    a=v->data;
    p=p->next;
    delete v;
    return a;

}
void LinkedListe::permut(Node* &p)
{

    Node* v=p;
    p=p->next;
    p->next=p->next->next;
    p->next->next = v;


}


