// ***************************************************
// Projekt:      
// Copyright:    
// Author: Besart Jashari       
// Datum:        
// Programmname: 
// ***************************************************

#include <iostream>

void table_init();
void print_table();
int end_game();

	char table[3][3];

	int main() {
  		int turn = 0;
		int choice;
  		char mark;
  		int winner_exists = 0;
  	
	  	table_init();
  
  	while(!winner_exists) {
    	std::cout << "\n\n\n\n\n\n";
    	system("cls");
    
	print_table();

    if(turn % 2 == 0) {
      std::cout << "Player's 1 turn: ";
      mark = 'X';
    } else {
      std::cout << "Player's 2 turn: ";
      mark = 'O';
    }
    
    std::cin >> choice;
    turn++;
    choice--;
    table[choice / 3][choice % 3] = mark;

    winner_exists = end_game();
  } 
  
 	if (winner_exists == 1) std::cout << "Congratulations! Player 1 won the game :) \n";
 	
	 	else if (winner_exists == 2) std::cout << "Congratulations! Player 2 won the game :) \n";
 
 		else std::cout << "Tie! Both players did a good job :) \n";
}

	void table_init() {
  
  	for (int i = 0; i < 3; i++) 
    	for(int j = 0; j < 3; j++) 
      		table[i][j] = '_';

	std::cout << "Press [Enter] to begin: ";
  	std::cin.ignore();

  	std::cout << "\n";

  	std::cout << "===========\n";
  	std::cout << "Tic-Tac-Toe\n";
  	std::cout << "===========\n\n";
  
  	std::cout << "Player 1) ?\n";
  	std::cout << "Player 2) ?\n\n";

  	std::cout << "Here's the 3 x 3 grid:\n\n";

  	std::cout << "     |     |      \n";
  	std::cout << "  1  |  2  |  3   \n";
  	std::cout << "_____|_____|_____ \n";
  	std::cout << "     |     |      \n";
  	std::cout << "  4  |  5  |  6   \n";
  	std::cout << "_____|_____|_____ \n";
  	std::cout << "     |     |      \n";
  	std::cout << "  7  |  8  |  9   \n";
  	std::cout << "     |     |      \n\n";
}

void print_table() {
  /*for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++)
      std::cout << table[i][j] << " ";
    std::cout << "\n";
  }*/
  std::cout << "     |     |      \n";
  std::cout << "  " << table[0][0] << "  |  " << table[0][1] << "  |  " << table[0][2] << "   \n";
  std::cout << "_____|_____|_____ \n";
  std::cout << "     |     |      \n";
  std::cout << "  " << table[1][0] << "  |  " << table[1][1] << "  |  " << table[1][2] << "   \n";
  std::cout << "_____|_____|_____ \n";
  std::cout << "     |     |      \n";
  std::cout << "  " << table[2][0] << "  |  " << table[2][1] << "  |  " << table[2][2] << "   \n";
  std::cout << "     |     |      \n\n";
}

	int end_game() {
  	
	  if(table[0][0] == table[0][1] && table[0][1] == table[0][2]) {
    	if(table[0][0] == 'X') return 1;
    		else if (table[0][0] == 'O') return 2;
  			} else if(table[1][0] == table[1][1] && table[1][1] == table[1][2]) {
    
		if(table[1][0] == 'X') return 1;
    		else if (table[1][0] == 'O') return 2;
  			} else if(table[2][0] == table[2][1] && table[2][1] == table[2][2]) {
    
		if(table[2][0] == 'X') return 1;
  		  else if (table[2][0] == 'O') return 2;
  		} else if(table[0][0] == table[1][0] && table[1][0] == table[2][0]) {
    		if(table[0][0] == 'X') return 1;
    			else if (table[0][0] == 'O') return 2;
  				} else if(table[0][1] == table[1][1] && table[1][1] == table[2][1]) {
    
		if(table[0][1] == 'X') return 1;
    		else if (table[0][1] == 'O') return 2;
  			} else if(table[0][2] == table[1][2] && table[1][2] == table[2][2]) {
    
		if(table[0][2] == 'X') return 1;
    		else if (table[0][2] == 'O') return 2;
  			} else if(table[0][0] == table[1][1] && table[1][1] == table[2][2]) {
    
		if(table[0][0] == 'X') return 1;
    		else if (table[0][0] == 'O') return 2;
  			} else if(table[0][2] == table[1][1] && table[1][1] == table[2][0]) {
    
		if(table[0][2] == 'X') return 1;
    		else if (table[0][2] == 'O') return 2;
  }

  int counter = 0;
  for(int i = 0; i < 3; i++)
    for(int j = 0; j < 3; j++) 
      if(table[i][j] == '_') counter++;
  return counter == 0 ? -1 : 0;
}


