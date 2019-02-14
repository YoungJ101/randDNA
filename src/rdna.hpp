#include <random>
#include <string>
using namespace std; 

string randDNA(int seed, string bases, int length)
{
	string randomDNA = "" ;
	mt19937 eng1(seed);
	uniform_int_distribution<int> un(0, bases.size()-1);
	
	if (bases.size() == 0) {
	 randomDNA = "";
	 return randomDNA;
 }
 
	for (int i=0; i<length; i++) {
		int random = un(eng1);
		randomDNA += bases[random];
	}
	
	return randomDNA;
	
} // randDNA(9865132, "", 51);
