#include <stdlib.h>
#include "Game.h"

//Global variables rarely a good idea
//static bool notAWinner;

int main(){

  bool notAWinner;
	srand(time(NULL));
	Game aGame;

	aGame.add("AOT");
	aGame.add("FMA");
	aGame.add("DN");

	do {
		aGame.roll(rand() % 5 + 1);
    
    //Increased probability of getting wrong answer
		if (rand() % 9 < 4){
			notAWinner = aGame.wrongAnswer();
		} else {
			notAWinner = aGame.wasCorrectlyAnswered();
		}

	} while (notAWinner);

}
