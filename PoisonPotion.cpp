/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCE-3-1-PDGD09-loys.caucheteux
** File description:
** PoisonPotion
*/

#include "PoisonPotion.hpp"
#include <iostream>

PoisonPotion::PoisonPotion() {}

PoisonPotion::~PoisonPotion() {}


void PoisonPotion::use(ICharacter *c) const
{
    c->setHp(c->getHp() - 50);
    std::cout << c->getName() << " has been poisoned." << std::endl;
}