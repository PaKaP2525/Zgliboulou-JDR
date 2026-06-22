#include "character.h"
#include <cstdlib>
using namespace std;

Character::Character(string n, vector<Class> c, int h, int e) {
    name_ = n;
    classes_ = c;
    health_ = h;
    energy_ = e;
}

void Character::levelClass(Class* class_) {
    if (class_ != nullptr) {
        if(class_->subclass() != nullptr) {
            levelClass(class_->subclass()); // recursively level up subclasses first
        }
        class_->atLevel(class_->level() + 1);
        int healthRolled = rand() % class_->healthDice(); // health and energy are rolled based on the class's dice
        int energyRolled = rand() % class_->energyDice();
        if(healthRolled != 1) health_ += healthRolled;
        else health_ += rand() % class_->healthDice(); // reroll ones
        if(energyRolled != 1) energy_ += energyRolled;
        else energy_ += rand() % class_->energyDice(); // reroll ones
        

    }
}