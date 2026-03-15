#include "Guild.h"
#include "Knight.h"
#include "Spellblade.h"

int main()
{
    Guild guild("Eldoria");

    Hero* h1 = new Knight("Arthur",120,40,10,30);
    Hero* h2 = new Warrior("Bjorn",150,35,12);
    Hero* h3 = new Spellblade("Ezra",110,45,8,50);

    guild += h1;
    guild += h2;
    guild += h3;

    cout << guild;

    if (*h1 > *h2)
        cout << h1->getName() << " is stronger than " << h2->getName() << endl;

    cout << "Combined Vitality: " << (*h1 + *h2) << endl;

    return 0;
}