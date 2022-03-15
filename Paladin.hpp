/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCE-3-1-PDGD09-loys.caucheteux
** File description:
** Paladin
*/

#pragma once
#include "Knight.hpp"
#include "Priest.hpp"


class Paladin : public Knight, public Priest {
    public:
        Paladin(const std::string &, int);
        ~Paladin();

        int attack();
        int special();
        void rest();
        void damage(int);
    protected:
    private:
};
