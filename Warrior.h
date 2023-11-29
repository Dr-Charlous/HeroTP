#pragma once

#include "Hero.h"

class Warrior: public Hero {
public:
    Warrior(std::string _name, int _healthPoints, int _attackStrength, int _armor);
    int reduceDamage(int damage);

    int getArmor();
    void setArmor(int _armor);
    void takeDamage(int damage) override;
private:
    int armor;
};