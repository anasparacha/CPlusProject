#include <stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std
using std::cout;
using std::endl;

class Card{
public:
	enum:string FaceAnimal{'Crab','Penguin','Octopous','Turtle','Walrus'};
	enum:string FaceBackground{'Red','Green','Purple','Blue','Yellow'};
	string* rows; 
	const int numberOfRows=3;
	FaceAnimal animal;
	FaceBackground color; 
	void getNumberOfRows()const;
	char getColor()const;
	char getAnimal()const;
	void printCard()const;
	//void setColor(const FaceBackground& color); 
	//void setAnimal(const FaceAnimal& animal);
private:
	Card(FaceAnimal animal, FaceBackground color); //specific constructor
	~Card();
}