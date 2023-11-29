#include <iostream>
#include "Warrior.h"

int main() {
    Warrior Thor("Thor", 80, 15, 5);
    std::cout << Thor.getName() << " " << Thor.getHealthPoints() << " " << Thor.getAttackStrength() << " " << Thor.getArmor() << std::endl;
    std::cout << Thor.reduceDamage(100) << std::endl;
    Hero Loki("Loki", 100, 12);
    Loki.attack(Thor);
    std::cout << Thor.getName() << " " << Thor.getHealthPoints() << " " << Thor.getAttackStrength() << " " << Thor.getArmor() << std::endl;

}
