/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCE-3-1-PDGD09-loys.caucheteux
** File description:
** Priest
*/

#pragma once
#include "Enchanter.hpp"

class Priest : public Enchanter {
    public:
        Priest(const std::string &, int);
        ~Priest();
        
        void rest();
    protected:
    private:
};
