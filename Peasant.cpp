/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCE-3-1-PDGD09-loys.caucheteux
** File description:
** Peasant
*/

#include "Peasant.hpp"
#include "IPotion.hpp"
#include <iostream>

Peasant::Peasant(const std::string &name, int power) : name(name), power(power)
{
    hp = 100;
    if (power > 100)
        power = 100;
    std::cout << name << " goes for an adventure." << std::endl;
}

Peasant::Peasant(Peasant const &other) : name(other.name), power(other.power), hp(other.hp)
{
    std::cout << name << " goes for an adventure." << std::endl;
}

Peasant::~Peasant() {
    std::cout << name << " is back to his crops." << std::endl;
}


int Peasant::getPower() const { return power; }

int Peasant::getHp() const { return hp; }

const std::string &Peasant::getName() const { return name; }


void Peasant::setHp(int _hp) {
    if (_hp < 0)
        hp = 0;
    else if (_hp <= 100)
        hp = _hp;
    else hp = 100;
}

void Peasant::setPower(int pow) {
    if (pow < 0)
        power = 0;
    else if (pow <= 100)
        power = pow;
    else power = 100;
}

int Peasant::attack()
{
    if (power - 10 >= 0 && hp > 0) {
        power -= 10;
        std::cout << name << " tosses a stone." << std::endl;
        return 5;
    }
    else if (!(hp > 0)) {
        std::cout << name << " is out of combat." << std::endl;
        return 0;
    }
    std::cout << name << " is out of power." << std::endl;
    return 0;
    
}

int Peasant::special()
{
    if (hp > 0) {
        std::cout << name << " doesn't know any special move." << std::endl;
        return 0;
    } else {
        std::cout << name << " is out of combat." << std::endl;
        return 0;
    }
}

void Peasant::rest()
{
    if (hp > 0) {
        std::cout << name << " takes a nap." << std::endl;
        setPower(power + 30);
    } else
        std::cout << name << " is out of combat." << std::endl;
}

void Peasant::damage(int damage)
{
    setHp(hp - damage);
    if  (hp > 0)
        std::cout << name << " takes " << damage <<  " damage." << std::endl;
    else std::cout << name << " is out of combat." << std::endl;
}

void Peasant::drink(const IPotion &potion)
{
    potion.use(this);
}