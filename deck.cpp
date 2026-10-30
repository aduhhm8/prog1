// Author: Adam Cobian
// CECS 325-01 Prog 1
// Due: 8/16/26
#include <iostream>
#include "deck.h"
using namespace std;

Deck::Deck()
{
	char suits[] = {'C','S','D','H'};
	char ranks[] = {'A','2','3','4','5','6','7','8','9','T','J','Q','K'};

	int index = 0;

	for (int s = 0; s < 4; s++)
	{
		for (int r = 0; r < 13; r++)
		{
			cards[index] = Card(suits[s], ranks[r]);
			index = index + 1;
		}
	}

	nextcard = 0;
}

void Deck::show()
{
	for (int i = 0; i < 52; i++)
	{
		cards[i].show();

		if (i == 12 || i == 25 || i == 38 || i == 51)
		{
			cout << endl;
		}
		else
		{
			cout << ",";
		}
	}
}

void Deck::shuffle()
{
	for (int i = 0; i < 52; i++)
	{
		int j = rand() % 52;
		Card temp = cards[i];
		cards[i] = cards[j];
		cards[j] = temp;
	}
}

Card Deck::deal()
{
	Card c = cards[nextcard]; 
	nextcard = nextcard + 1; 
	return c;
}

