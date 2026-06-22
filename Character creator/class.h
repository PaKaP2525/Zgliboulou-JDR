#pragma once
#include <string>
#include <vector>
#include "skill.h"
using namespace std;

class Class{
    string name_;
    Class* subclass_;
    bool mainClass_;
    int level_;
    vector<Skill> skills_;
    int healthDice_;
    int energyDice_;

    public :

    Class(string n = "null", Class* sub = nullptr, int l = 0, vector<Skill> s = vector<Skill>(), int h = 0, int e = 0);
    string name(){return name_;}
    Class* subclass(){return subclass_;}
    int level(){return level_;}
    vector<Skill> skills(){return skills_;}
    int healthDice(){return healthDice_;}
    int energyDice(){return energyDice_;}
    bool mainClass(){return mainClass_;}

    void atName(string n){name_ = n;}
    void atSubclass(Class* sub){subclass_ = sub;}
    void atLevel(int l){level_ = l;}
    void atSkills(vector<Skill> s){skills_ = s;}
    void atHealthDice(int h){healthDice_ = h;}
    void atEnergyDice(int e){energyDice_ = e;}
    void atMainClass(bool m){mainClass_ = m;}
};