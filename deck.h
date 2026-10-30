// Author: Adam Cobian
// CECS 325-01 Prog 1
// Due: 8/16/26
#ifndef DECK_H
#define DECK_H
#include "card.h"

//deck class holds 52 cards
class Deck
{
	private:
		Card cards[52];
		int nextcard;

	public:
		Deck();
		Card deal();
		void show();
		void shuffle();
};

#endif
