#include <stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std
using std::cout;
using std::endl;
class Rules{
	//probably need a game object to hold the previous state
	//the current state is passed in as a parameter
	//might need an update function for the game object(copy constructor in game)
public:
	bool isValid(const Game& currentGame);//returns true if previous and current cards match
	bool gameOver(const Game& currentGame);//returns true if the number of rounds has reached 7
	bool roundOver(const Game& currentGame);//returns true if the there is only one player left active
}