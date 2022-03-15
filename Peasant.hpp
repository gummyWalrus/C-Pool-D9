/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCE-3-1-PDGD09-loys.caucheteux
** File description:
** Peasant
*/

#pragma once
#include <string>
#include "ICharacter.hpp"

class IPotion;

class Peasant : public ICharacter {
    public:
        Peasant(const std::string &, int);
        Peasant(Peasant const &other);
        ~Peasant();
        int attack();
        int special();
        void rest();
        void damage(int damage) override;
        void drink(const IPotion &);
        const std :: string &getName() const;
        int getPower() const;
        int getHp() const;
        void setPower(int);
        void setHp(int);
    protected:
        std::string name;
        int power;
        int hp;
};
