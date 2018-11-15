#include <stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std
using std::cout;
using std::endl;
class Player{

public:
	string name; 
	bool status;
	int numOfRubies;
	string sideOfBoard;
	Player();//default constructor 
	Player(string name, bool status, string side);//specific constructor
	//no need for a copy connstructor, players shouldnt be copied
	~Player();//should be default not dealing with any special objects over here
	string getName()const; //returns the players name
	void setActive(bool status); // sets the players status true for active false for inactive
	bool isActive()const;//returns the status of the player
	int getNRubies()const;//Returns the number of rubies won by the player
	void addReward(const Reward&);// add a reward with a given number of rubies
	void setDisplayMode(bool endOfGame);// a boolean variable to determine whether the game is completely over or not 
	//need a toString function 
	//assignment operators if we have time 
}