#include "pch.h"
#include "KMP.hpp"

TEST(KMPTests, Own_Test)
{
	cout << "-------------------------------" << endl;
	cout << "Match string and substring by first index --> ";
	KMP("abcdabscabcdabsa", "abs");
	cout << endl << "-------------------------------" << endl;

	cout << "-------------------------------" << endl;
	cout << "Match string and substring by first index --> ";
	KMP("sasaassa", "sa");
	cout << endl << "-------------------------------" << endl;

	cout << "-------------------------------" << endl;
	cout << "Match string and substring by first index --> ";
	KMP("incinnninininisoburbininin", "in");
	cout << endl << "-------------------------------" << endl;
}