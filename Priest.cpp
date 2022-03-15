/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCE-3-1-PDGD09-loys.caucheteux
** File description:
** Priest
*/

#include "Knight.hpp"
#include "Paladin.hpp"
#include "Priest.hpp"
#include <string>
#include <iostream>

Priest::Priest(const std::string &name, int power) : Peasant(name, power), Enchanter(name, power)
{
    std::cout << name << " enters in the order." << std::endl;
}

Priest::~Priest()
{
    std::cout << name << " finds peace." << std::endl;
}

void Priest::rest()
{
    if (hp> 0) {
        std::cout << name << " prays." << std::endl;
        setPower(100);
        setHp(100);
    } else
        std::cout << name << " is out of combat." << std::endl;
}