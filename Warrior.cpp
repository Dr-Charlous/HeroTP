//
// Created by lucien.mousin on 24/11/2023.
//

#include "Warrior.h"

int Warrior::reduceDamage(int damage) {
    int finalDamage = damage - armor;
    if ( finalDamage < 0) return 0;
    else return finalDamage;
}

Warrior::Warrior(std::string _name, int _healthPoints, int _attackStrength, int _armor) :
                                                Hero(_name, _healthPoints, _attackStrength),
                                                armor(_armor) {

}

int Warrior::getArmor() {
    return this->armor;
}

void Warrior::setArmor(int _armor) {
    this->armor = _armor;
}

void Warrior::takeDamage(int damage) {
    this->healthPoints -= reduceDamage(damage);
}
