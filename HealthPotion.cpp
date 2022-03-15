/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCE-3-1-PDGD09-loys.caucheteux
** File description:
** HealthPotion
*/

#include "HealthPotion.hpp"
#include <iostream>

HealthPotion::HealthPotion() {}

HealthPotion::~HealthPotion() {}


void HealthPotion::use(ICharacter *c) const
{
    c->setHp(c->getHp() + 50);
    std::cout << c->getName() << " feels rejuvenated." << std::endl;
}