#include <stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std
using std::cout;
using std::endl;
//could implement deck using a stack 
class Deck<C>{
public:
	void shuffle();//shuffles the cards in the deck using std::random_shuffle
	C* getNext();//returns the next card by pointer, if no more cards are available returns the nullptr
	bool isEmpty()const;//returns true if the deck is empty 
}