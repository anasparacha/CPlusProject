#include <stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std
using std::cout;
using std::endl;
class Game{
//needs a board object
//this class will hold the present state of the game
public:
	int getRound()const;//returns the current round, number between 0 to 6
	void addPlayer(const Player& p);//adds a player to the game
	Player& getPlayer();//returns a player in the current game
	const Card* getPreviousCard();
	const Card* getCurrentCard();
	void setCurrentCard(const Card* c);
	// must be printable toString, displays the current state of the board and the players
}