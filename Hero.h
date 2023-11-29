#pragma once
#include <string>

class Hero {
public:
    Hero(std::string _name, int _healthPoints, int _attackStrength);

    std::string &getName();
    void setName(std::string name);

    int getHealthPoints();
    void setHealthPoints(int healthPoints);

    int getAttackStrength();
    void setAttackStrength(int attackStrength);

    void attack(Hero &_adversaire);
    bool isAlive();
    virtual void takeDamage(int damage);

protected:
    std::string name;
    int healthPoints;
    int attackStrength;
};

