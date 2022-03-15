/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCE-3-1-PDGD09-loys.caucheteux
** File description:
** HealthPotion
*/

#pragma once
#include "IPotion.hpp"

class HealthPotion : public IPotion {
    public:
        HealthPotion();
        ~HealthPotion();
        void use(ICharacter *) const;
    protected:
    private:
};
