/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCE-3-1-PDGD09-loys.caucheteux
** File description:
** Knight
*/
#include "Knight.hpp"
#include <iostream>

Knight::Knight(const std::string &_name, int _power) : Peasant(_name, _power)
{
    std::cout << name << " vows to protect the kingdom." << std::endl;
}

Knight::~Knight()
{
    std::cout << name << " takes off his armor." << std::endl;

}

int Knight::attack()
{
    if (power - 10 >= 0 && hp > 0) {
        power -= 10;
        std::cout << name << " strikes with his sword." << std::endl;
        return 20;
    }
    else if (!(hp > 0)) {
        std::cout << name << " is out of combat." << std::endl;
        return 0;
    }
    std::cout << name << " is out of power." << std::endl;
    return 0;   
}

int Knight::special()
{
    if (power - 30 >= 0 && hp > 0) {
        power -= 30;
        std::cout << name << " impales his enemy." << std::endl;
        return 50;
    }
    else if (!(hp > 0)) {
        std::cout << name << " is out of combat." << std::endl;
        return 0;
    }
    std::cout << name << " is out of power." << std::endl;
    return 0;
}

void Knight::rest()
{
    if (hp > 0) {
        std::cout << name << " eats." << std::endl;
        setPower(power + 50);
    } else
        std::cout << name << " is out of combat." << std::endl;
}