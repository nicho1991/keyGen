#include "keyGen.h"



keyGen::keyGen( int size, int select )
{
	srand( time( NULL ) );
	newKey( size, select );
}

keyGen::keyGen()
{
	srand( time( NULL ) );
}

keyGen::~keyGen()
{
	delete[] key_;
}

void keyGen::newKey( int size, int select )
{
	/* select
	1 = small letters
	2 = big letters
	3 = both
	4 = numbers
	5 = max security
	*/

	key_ = new string[size];



	if (select == 1) // small letters
	{
		for (int i = 0; i < size; i++)
		{
			genrand( 97, 122 );
			*key_ = *key_ + randomNbr_;
		}
	}
	if (select == 2)
	{
		for (int i = 0; i < size; i++) // big letters
		{
			genrand( 65, 90 );
			*key_ = *key_ + randomNbr_;
		}
	}
	if (select == 3) //big and small letters
	{
		for (int i = 0; i < size; i++)
		{
			int r = rand() % 2; // choose from 2 cases randomly
			switch (r) {
				case(0): // [1, 4]
					genrand( 97, 122 );
					*key_ = *key_ + randomNbr_;
					break;
				case(1): // [6, 7]
					genrand( 65, 90 );
					*key_ = *key_ + randomNbr_;
					break;
			}
		}
	}
	if (select == 4) //big and small letters
	{
		for (int i = 0; i < size; i++) // big letters
		{
			genrand( 48, 57 );
			*key_ = *key_ + randomNbr_;
		}
	}
	if (select == 5) // all signs
	{
		for (int i = 0; i < size; i++)
		{
			genrand( 33, 126 );
			*key_ = *key_ + randomNbr_;
		}
	}
}


void keyGen::genrand( int min, int max )
{
	randomNbr_ = rand() % ( max-min +1 ) + min;
}


string keyGen::getKey()
{
	return *key_;
}



