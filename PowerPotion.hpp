/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCE-3-1-PDGD09-loys.caucheteux
** File description:
** PowerPotion
*/

#pragma once
#include "IPotion.hpp"

class PowerPotion : public IPotion {
    public:
        PowerPotion();
        ~PowerPotion();
        void use(ICharacter *) const;
    protected:
    private:
};
