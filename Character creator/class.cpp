#include "class.h"

Class::Class(string n, Class* sub, int l, vector<Skill> s, int h, int e) {
    name_ = n;
    subclass_ = sub;
    level_ = l;
    skills_ = s;
    healthDice_ = h;
    energyDice_ = e;
}