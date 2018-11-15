#include <stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>
#include "Card.h"

using namespace std
using std::cout;
using std::endl;

void Card::getNumberOfRows()const{
	return numberOfRows;
}
char Card::getColor()const{
	if (color=="Red")return 'r';
	else if(color=="Green")return'g';
	else if(color=="Purple")return'p';
	else if(color=="Blue")return'b';
	else if(color=="Yellow")return'y';
}
char Card::getAnimal()const{
	if (animal=="Crab")return'C';
	else if(animal=="Penguin")return'P';
	else if(animal=="Octopus")return'O';
	else if(animal=="Turtle")return'T';
	else if(animal=="Walrus")return'W';
}
void Card::printCard()const{
	for(int i=0; i<Card::getNumberOfRows();i++){
		string rowString= *(rows+i);
		cout<<rowString<<endl;
	}
}

Card::Card(FaceAnimal animal, FaceBackground color){
	animal=animal;
	color=color;
	for(int i=0; i<3; i++){
		*(rows+i)=string(3,Card::getColor());
	}
	rows[1][1]=Card::getAnimal();
};
Card::~Card():default{};

	