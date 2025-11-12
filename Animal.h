#ifndef ANIMAL_H
#define ANIMAL_H

class Animal{
    private:
    string name;
    int age;
    bool Ishungry;
    public:
    Animal();
    
    Animal(string n , int a, bool I);
    
     ~Animal();
    void display();
    void feed();
    
    
};
#endif
