#include "Hero.h"

Hero::Hero(string n, int h, int p)
{
    name = n;
    health = h;
    basePower = p;
}

Hero::~Hero() {}

void Hero::takeDamage(int damage)
{
    health -= damage;

    if (health < 0)
        health = 0;
}

bool Hero::operator>(const Hero &other) const
{
    return basePower > other.basePower;
}

int Hero::operator+(const Hero &other) const
{
    return health + other.health;
}

string Hero::getName() const
{
    return name;
}

int Hero::getHealth() const
{
    return health;
}

int Hero::getPower() const
{
    return basePower;
}

void Hero::display() const
{
    cout << "Hero: " << name
         << " | Health: " << health
         << " | Power: " << basePower
         << endl;
}