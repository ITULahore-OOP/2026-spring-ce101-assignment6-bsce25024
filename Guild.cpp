#include "Guild.h"

Guild::Guild(string name)
{
    guildName = name;
    memberCount = 0;

    for(int i = 0; i < 15; i++)
        roster[i] = nullptr;
}

Guild::~Guild()
{
    for(int i = 0; i < memberCount; i++)
        delete roster[i];

    cout << "The guild " << guildName << " has been disbanded." << endl;
}

void Guild::operator+=(Hero* newHero)
{
    if(memberCount < 15)
    {
        roster[memberCount++] = newHero;
    }
    else
    {
        cout << "Guild is at full capacity!" << endl;
    }
}

int Guild::calculateTotalGuildPower() const
{
    int total = 0;

    for(int i = 0; i < memberCount; i++)
        total += roster[i]->getPower();

    return total;
}

void Guild::displayGuildStats() const
{
    cout << "Guild Name: " << guildName << endl;

    for(int i = 0; i < memberCount; i++)
    {
        cout << roster[i]->getName()
             << " | Power: "
             << roster[i]->getPower()
             << endl;
    }

    cout << "Total Guild Power: "
         << calculateTotalGuildPower()
         << endl;
}

ostream& operator<<(ostream& os, const Guild& g)
{
    os << "Guild Name: " << g.guildName << endl;

    for(int i = 0; i < g.memberCount; i++)
    {
        os << g.roster[i]->getName()
           << " | Power: "
           << g.roster[i]->getPower()
           << endl;
    }

    return os;
}