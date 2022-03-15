/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCE-3-1-PDGD09-loys.caucheteux
** File description:
** Enchanter
*/

#include "Enchanter.hpp"
#include <iostream>

Enchanter::Enchanter(const std::string &_name, int _power) : Peasant(_name, _power)
{
    std::cout << name << " learns magic from his spellbook." << std::endl;
}

Enchanter::~Enchanter()
{
    std::cout << name << " closes his spellbook." << std::endl;
}

int Enchanter::attack()
{
    if (hp > 0) {
        std::cout << name << " doesn't know how to fight." << std::endl;
        return 0;
    }
    std::cout << name << " is out of combat." << std::endl;
    return 0;   
}

int Enchanter::special()
{
    if (power - 50 >= 0 && hp > 0) {
        power -= 50;
        std::cout << name << " casts a fireball." << std::endl;
        return 99;
    }
    else if (!(hp > 0)) {
        std::cout << name << " is out of combat." << std::endl;
        return 0;
    }
    std::cout << name << " is out of power." << std::endl;
    return 0;
}

void Enchanter::rest()
{
    if (hp > 0) {
        std::cout << name << " meditates." << std::endl;
        setPower(100);
    } else
        std::cout << name << " is out of combat." << std::endl;
}