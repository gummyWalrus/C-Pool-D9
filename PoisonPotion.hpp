/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCE-3-1-PDGD09-loys.caucheteux
** File description:
** PoisonPotion
*/

#pragma once
#include "IPotion.hpp"

class PoisonPotion : public IPotion {
    public:
        PoisonPotion();
        ~PoisonPotion();
        void use(ICharacter *) const;
    protected:
    private:
};
