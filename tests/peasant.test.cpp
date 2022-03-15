/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCE-3-1-PDGD09-loys.caucheteux
** File description:
** peasent.test
*/

#include <criterion/criterion.h>
#include "../Peasant.hpp"
#include "../PoisonPotion.hpp"
#include "../PowerPotion.hpp"
#include "../HealthPotion.hpp"
#include <criterion/redirect.h>

void redirect_all_stdout(void)
{
        cr_redirect_stdout();
        cr_redirect_stderr();
}

Test(peasent, construction, .init=redirect_all_stdout)
{
    const Peasant *p = new Peasant("Patrick", 10);
    cr_assert(p->getName() == "Patrick");
    cr_assert(p->getPower() == 10);
    cr_assert(p->getHp() == 100);
    delete p;
}

Test(peasent, copy, .init=redirect_all_stdout)
{
    const Peasant p("Patrick", 10);
    const Peasant *p2 = new Peasant(p);
    cr_assert(p2->getHp() == 100);
    cr_assert(p2->getName() == "Patrick");
    cr_assert(p2->getPower() == 10);
    delete p2;
}

Test(peasant, setters, .init=redirect_all_stdout)
{
    Peasant *p = new Peasant("Patrick", 10);
    p->setHp(90);
    cr_assert(p->getHp() == 90);
    p->setHp(150);
    cr_assert(p->getHp() == 100);
    p->setPower(0);
    cr_assert(p->getPower() == 0);
    p->setPower(150);
    cr_assert(p->getPower() == 100);
    delete p;
}

Test(peasent, attack, .init=redirect_all_stdout)
{
    Peasant p("Patrick", 20);
    cr_assert(p.attack() == 5);
    cr_assert(p.getPower() == 10);
    cr_assert(p.attack() == 5);
    cr_assert(p.attack() == 0);
    p.setPower(10);
    p.setHp(0);
    cr_assert(p.attack() == 0);
}

Test(peasent, special, .init=redirect_all_stdout)
{
    Peasant p("Patrick", 20);
    cr_assert(p.special() == 0);
    cr_assert(p.getPower() == 20);
    p.setHp(0);
    cr_assert(p.special() == 0);
    cr_assert(p.getPower() == 20);
}

Test(peasent, rest, .init=redirect_all_stdout)
{
    Peasant p("Patrick", 20);
    p.rest();
    cr_assert(p.getPower() == 50);
    p.setHp(0);
    p.rest();
    cr_assert(p.getPower() == 50);
    p.setHp(100);
    p.setPower(100);
    p.rest();
    cr_assert(p.getPower() == 100);
}

Test(peasent, damage, .init=redirect_all_stdout)
{
    Peasant p("Patrick", 20);
    p.damage(10);
    cr_assert(p.getHp() == 90);
    p.damage(120);
    cr_assert(p.getHp() == 0);
}