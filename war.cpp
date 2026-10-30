// Author: Adam Cobian
// CECS 325-01 
// Prog 1
// Due: 8/16/26
//
// I certify that this program is my own original work. I did not copy any part of this program from
// any other source including inappropriate AI use. I did not share this program with anyone. I
// further certify that I typed each and every line of code in this program
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>        
#include "card.h"
#include "deck.h"
using namespace std;

int self(int n)
{
	return n;
}

int main()
{
	srand(time(0)); 
	Deck d; 

	string name1;
	string name2;
	cout << "Enter the name of the first player: ";
	cin >> name1;
    	cout << "Enter the name of the second player: ";
	cin >> name2;

	cout << endl << " Original Deck" << endl;
	d.show();
	
	d.shuffle();
	cout << endl << " Shuffled Deck" << endl;
	d.show();

	int wins1 = 0;
	int wins2 = 0;
	int ties = 0;

	for (int i = 0; i < 26; i++)
	{
		cout << endl << "Game " << self(i + 1) << endl;
        	cout << "--------" << endl;

        	Card c1 = d.deal();
        	Card c2 = d.deal();

        	cout << "\t" << name1 << "=>";
        	c1.show();
        	cout << endl;
        	cout << "\t" << name2 << "=>";
        	c2.show();
        	cout << endl;

        	int result = c1.compare(c2);

        	if (result == 1) 
		{
			cout << name1 << "=> Winner" << endl;
            		wins1 = wins1 + 1;
       		}
        	else if (result == -1)
        	{
            		cout << name2 << "=> Winner" << endl;
            		wins2 = wins2 + 1;
        	}
        	else
        	{
            		cout << "Tie game" << endl;
            		ties = ties + 1;
        	}
    	}

	cout << endl << "------Final Stats-------" << endl;
    	cout << "\t" << name1 << " vs. " << name2 << endl;
    	cout << "Wins\t" << wins1 << "\t" << wins2 << endl;
    	cout << "Losses\t" << wins2 << "\t" << wins1 << endl;
    	cout << "Ties\t" << ties << "\t" << ties << endl;

    	return 0;
}

