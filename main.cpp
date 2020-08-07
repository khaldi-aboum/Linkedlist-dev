#include <iostream>
#include "LinkedListe.h"
#include "Node.h"
#include"Objet.cpp"
#include "LinkedListe.cpp"
#include "Objet.h"


int main() {


LinkedListe l;
Objet a;
   for(int i=0;i<12;i++)
   {
      cout<<"le element :"<< i <<":";
      cin>> a.id ;
      cout<<endl;

       l.insertordre(a);

   }

l.printList();


    std::cout << "size :"<< l.size() << std::endl;
    return 0;
}
