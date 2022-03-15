/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCE-3-1-PDGD09-loys.caucheteux
** File description:
** ICharacter
*/

#pragma once
#include <string>

class IPotion;

class ICharacter {
    public:
        virtual ~ICharacter() {}
        virtual int attack() = 0;
        virtual int special() = 0;
        virtual void rest() = 0;
        virtual void damage(int damage) = 0;
        virtual void drink(const IPotion &) = 0;
        virtual const std :: string &getName() const = 0;
        virtual int getPower() const = 0;
        virtual int getHp() const = 0;
        virtual void setPower(int) = 0;
        virtual void setHp(int) = 0;
    protected:
        std::string name;
        int power;
        int hp;
    private:
};
