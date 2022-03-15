/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCE-3-1-PDGD09-loys.caucheteux
** File description:
** Paladin
*/

#include "Paladin.hpp"
#include <iostream>

Paladin::Paladin(const std::string &name, int power) : Peasant(name, power), Knight(name, power), Priest(name, power)
{
    std::cout << name << " fights for the light." << std::endl;
}

Paladin::~Paladin()
{
    std::cout << Knight::name << " is blessed." << std::endl;
}

int Paladin::attack()
{
    return Knight::attack();
}

int Paladin::special()
{
    return Enchanter::special();
}

void Paladin::rest()
{
    Priest::rest();
}

void Paladin::damage(int dmg)
{
    Knight::damage(dmg);
}