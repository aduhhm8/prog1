// Author: Adam Cobian
// CECS 325-01 Prog 1
// Due 08/16/2026
#include <iostream>
#include "card.h"

using namespace std;

Card::Card()
{
    suit = 'X';
    rank = 'X';
}

Card::Card(char s, char r)
{
    suit = s;
    rank = r;
}

void Card::show()
{
    if (rank == 'T')
    {
        cout << "10" << suit;
    }
    else
    {
        cout << rank << suit;
    }
}

int Card::compare(Card other)
{
    char ranks[] = {'A','2','3','4','5','6','7','8','9','T','J','Q','K'};

    int myindex = -1;
    int otherindex = -1;

    for (int i = 0; i < 13; i++)
    {
        if (rank == ranks[i])
        {
            myindex = i;
        }
        if (other.rank == ranks[i])
        {
            otherindex = i;
        }
    }

    	if (myindex > otherindex)
    	{
		return 1;
    	}
	else if (myindex < otherindex)
	{
        	return -1;
    	}
    	else
    	{
        	return 0;
    	}
}
