#include "Knight.h"

Knight::Knight(string n, int h, int p, int armor, int bonus)
    : Hero(n, h, p), Warrior(n, h, p, armor)
{
    chargeBonus = bonus;
}

int Knight::calculateBurstDamage() const
{
    return getPower() + chargeBonus;
}