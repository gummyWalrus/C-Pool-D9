/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCE-3-1-PDGD09-loys.caucheteux
** File description:
** Knight
*/

#pragma once
#include "Peasant.hpp"

class Knight : public virtual Peasant {
    public:
        Knight(const std::string &, int);
        ~Knight();

        int attack();
        int special();
        void rest();
    protected:
    private:
};
