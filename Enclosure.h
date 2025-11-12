#ifndef ENCLOSURE_H
#define ENCLOSURE_H
#include "Animal.h"

class Enclosure:public Animal{
    private:
    Animal* Animal;
    int capacity;
    int CurrentCount;
    public:
    Enclosure();
    Enclosure(string n , int a, bool I,int c, int cc);
    ~Enclosure();
    void addAnimal(Animal* a);
    void displayAnimals();
    
};
#endif
