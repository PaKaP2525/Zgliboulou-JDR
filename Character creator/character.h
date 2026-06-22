#pragma once
#include <string>
#include "class.h"
using namespace std;

class Character{
    string name_;
    vector<Class> classes_;
    int health_;
    int energy_;

    public :

    Character(string n = "null", vector<Class> c = vector<Class>(), int h = 0, int e = 0);
    string name(){return name_;}
    vector<Class> getClasses(){return classes_;}
    int health(){return health_;}
    int energy(){return energy_;}

    void atName(string n){name_ = n;}
    void atClasses(vector<Class> c){classes_ = c;}
    void atHealth(int h){health_ = h;}
    void atEnergy(int e){energy_ = e;}

    void levelClass(Class* class_); // levels up the character's class and rolls for health and energy based on the class's dice
};