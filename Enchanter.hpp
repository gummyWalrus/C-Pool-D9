/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCE-3-1-PDGD09-loys.caucheteux
** File description:
** Enchanter
*/

#pragma once
#include "Peasant.hpp"


class Enchanter : public virtual Peasant {
    public:
        Enchanter(const std::string &, int);
        ~Enchanter();

        int attack();
        int special();
        void rest();
    protected:
    private:
};
