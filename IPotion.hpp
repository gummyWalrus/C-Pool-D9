/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCE-3-1-PDGD09-loys.caucheteux
** File description:
** IPotion
*/

#pragma once
#include <string>
#include "ICharacter.hpp"


class IPotion {
    public:
        virtual void use(ICharacter *) const = 0;
    protected:
    private:
};
