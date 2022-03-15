/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCE-3-1-PDGD09-loys.caucheteux
** File description:
** PowerPotion
*/

#include "PowerPotion.hpp"
#include <iostream>

PowerPotion::PowerPotion() {}

PowerPotion::~PowerPotion() {}


void PowerPotion::use(ICharacter *c) const
{
    c->setPower(c->getPower() + 50);
    std::cout << c->getName() << "'s power is restored." << std::endl;
}