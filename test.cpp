#include <iostream>
#include <cstdlib>
#include <ctime>
#include "deck.h"
using namespace std;

int main()
{
    srand(time(0));

    Deck d;

    cout << "Original Deck" << endl;
    d.show();

    d.shuffle();

    cout << endl << "Shuffled Deck" << endl;
    d.show();

    cout << endl << "Dealing 4 cards:" << endl;
    for (int i = 0; i < 4; i++)
    {
        Card c = d.deal();
        c.show();
        cout << " ";
    }
    cout << endl;

    return 0;
}
