#include <stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std
using std::cout;
using std::endl;
class Board{
	//the letters that this class will store signifies the rows from A-E, each row holds 5 cards
	// the numbers that this class will store signifies the columns, each column will hold 5 cards
	//(C,3) is left empty due to the missing volcano card
	//	need enumerators Letter and Number
	// Need the card object as well 
public:
	//returns true if a card at a given position is face up
	//throws an out of range exception if an invalid letter/number combination is given
	bool isFaceUp(const Letter& l, const Number& n)const;
	//changes the face of the card to up, if already up return false else return true upon success
	//throws an out of range exception if an invalid letter/number combination is given
	bool turnFaceup(const Letter& l, const Number& n);
	//changes the face of the card to down, if already down return false else return true upon success
	//throws an out of range exception if an invalid letter/number combination is given
	bool turnFaceDown(const Letter& l, const Number& n);
	// turns all cards face down
	void reset();
	//once again need a print function for the board 
	//example of board
	/* 
		yyy zzz zzz zzz zzz
	  A yWy zzz zzz zzz zzz
 		yyy zzz zzz zzz zzz
  		zzz zzz zzz bbb zzz
	  B zzz zzz zzz bPb zzz
  		zzz zzz zzz bbb zzz
  		zzz zzz		zzz zzz
	  C zzz zzz		zzz	zzz
  		zzz zzz		zzz zzz
 	    yyy zzz bbb zzz zzz
	  D yPy zzz bTb zzz zzz
 		yyy zzz bbb zzz zzz
  		zzz zzz zzz zzz zzz
	  E zzz zzz zzz zzz zzz
  		zzz zzz zzz zzz zzz
		 1	 2	 3	 4	 5
	*/

}