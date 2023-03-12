#pragma once
#include <iostream>
#include <list>
#include <vector>
using namespace std;

class Game{

	private:
    //Local variables
		string currentCategory();
    unsigned int currentPlayer;
		bool isGettingOutOfPenaltyBox;
    
    //static arrays	
    int places[6];
		int purses[6];
    bool inPenaltyBox[6];
	  
    //Dynamic Array
    vector<string> players;
    
    //Liked Lists
    list<string> popQuestions;
		list<string> scienceQuestions;
	  list<string> sportsQuestions;
		list<string> rockQuestions;
    
    //Functions
    bool didPlayerWin();
		void askQuestion();

  public:
	  //Constructor
    Game();
    
    //Functions
	  int howManyPlayers();
		bool wasCorrectlyAnswered();
		bool wrongAnswer();
	  bool isPlayable();
	  bool add(string playerName);
	  void roll(int roll);
	  string createRockQuestion(int index);

};

