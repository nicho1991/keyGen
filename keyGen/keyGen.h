#pragma once
#include <iostream>
#include <string>
#include <time.h>


using namespace std;
class keyGen
{
public:
	keyGen(	int size, int select );	//choose security level
	keyGen();
	~keyGen();
	void newKey( int size, int select );
	void genrand( int min, int max ); // making ascii number in selected range
	string getKey();
private:
	string* key_;
	char randomNbr_;
};

