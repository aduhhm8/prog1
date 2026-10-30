// Author: Adam Cobian
// CECS 325-01 Prog 1
// Due: 8/16/26

#ifndef CARD_H
#define CARD_H

class Card
{
	private:
		char suit;
		char rank;
	public: 
		Card();
		Card(char, char);
		void show();
		int compare(Card);
};

#endif
	
