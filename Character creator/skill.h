#pragma once
#include <string>
using namespace std;

class Skill{
    string name_;
    string originClass_;
    string cooldown_;
    string duration_;
    string effect_;
    int level_; // 0 for skills acquired by other means than a level up

    public :
    
    Skill(string n_ = "null", string oc_ = "null", int l_ = 0, string d_ = "X", string c_ = "X", string e_ = "null") 
        : name_(n_), originClass_(oc_), level_(l_), duration_(d_), cooldown_(c_), effect_(e_) {}
    
    string getName() const { return name_; }
    string getOriginClass() const { return originClass_; }
    int getLevel() const { return level_; }
    string getDuration() const { return duration_; }
    string getCooldown() const { return cooldown_; }
    string getEffect() const { return effect_; }
};