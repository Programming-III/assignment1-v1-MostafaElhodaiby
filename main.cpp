#include <iostream>
using namespace std;
#include "Animal.h"
#include "Enclosure.h"
#include "Visitor.h"
#include "Mammal.h"
#include "Bird.h"
#include "Reptile.h"
Animal::Animal(){
    name="";
    age=0;
    IsHungry=false;
    
}
Animal:: Animal(string n , int a, bool I){
    name=n;
    age=a;
    IsHungry=I;
    
}
Animal::~Animal(){}

void Animal::display() {
    cout << "Name: " << name << " age: " << age << "IsHungry" <<IsHungry<< endl;
}
    void Animal ::feed(){
        if (IsHungry==false){
            return false;}
            else { return true;
            }
            
        
    }
    
}
Enclosure::Enclosure():Animal(){
    capacity=0;
    CurrentCount=0;
    
}
Enclosure:: Enclosure(string n , int a, bool I,int c, int cc){
    name=n;
    age=a;
    IsHungry=I;
    capacity=c;
    CurrentCount=cc;
    
}
~Enclosure(){
    delete [] Animal;
}
void Enclosure ::addAnimal(Animal*a){
    
}
void Enclosure:: displayAnimals(){
     cout << "Name: " << name << " age: " << age << "IsHungry" <<IsHungry<< "capacity"<<capacity<<"CurrentCount"
     << CurrentCount<<endl;
}
Visitor::Visitor(){
   string VisitorName="";
    int ticketsBought=0;
    
}
Visitor::Visitor(string n , int t){
    VisitorName=n;
    ticketsBought=t;
    
}
void Visitor::display() {
    cout << "VisitorName: " << VisitorName << " ticketsBought: " << ticketsBought << endl;
}
int main(){
  Animal->display();
}



