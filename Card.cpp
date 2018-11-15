#include <stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>
#include "Card.h"

using namespace std
using std::cout;
using std::endl;
char Card::getColor(){

}
char Card::getAnimal(){

}


Card::Card(FaceAnimal animal, FaceBackground color){
	animal=animal;
	color=color;
	for(int i=0; i<3; i++){
		*(rows+i)=string(3,Card::getColor());
	}
	rows[1][1]=Card::getAnimal();
};

	//need a toString or a printCard method not sure exactly which of the two
	/*
	for (int row = 0; row <c.getNRows(); ++row ) {
     std::string rowString = c(row);
     std::cout << rowString << std::endl;
	}*/