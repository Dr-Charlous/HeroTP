//
// Created by lucien.mousin on 24/11/2023.
//

#include "Hero.h"

Hero::Hero(std::string _name, int _healthPoints, int _attackStrength) :
                                                                    name(_name),
                                                                    healthPoints(_healthPoints),
                                                                    attackStrength(_attackStrength) {

}

std::string &Hero::getName() {
    return this->name;
}

void Hero::setName(std::string name) {
    this->name = name;
}

int Hero::getHealthPoints() {
    return this->healthPoints;
}

void Hero::setHealthPoints(int healthPoints) {
    this->healthPoints = healthPoints;
}

int Hero::getAttackStrength() {
    return this->attackStrength;
}

void Hero::setAttackStrength(int attackStrength) {
    attackStrength = attackStrength;
}

void Hero::attack(Hero &_adversaire) {
    _adversaire.takeDamage(this->attackStrength);
}

bool Hero::isAlive() {
    return this->healthPoints > 0;
}

void Hero::takeDamage(int damage) {
    this->healthPoints -= damage;
}

