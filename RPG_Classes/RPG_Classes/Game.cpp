#include "Game.h"
#include "Character.h"
#include "Enemy.h"
#include <iostream>
#include <random>
#include <string>
#include <algorithm>
#include <cctype>

Game::Game()
{
}


Game::~Game()
{
}


void startFunc() {

	char yes = 'y';
	char no = 'n';
	char ans;

	std::cout << "\n Welcome To SimRPG " << std::endl;
	std::cout << "\n Would you like to play? (Y/N)" << std::endl;
	std::cin >> ans;

	if (tolower(ans) == tolower(yes)) {

		std::cout << "\n You're welcome to come and play" << std::endl;
		system("pause");
	}
	else if (tolower(ans) == tolower(no)) {

		std::cout << "\n Well then" << std::endl;
		system("pause");
	}
	else {

		std::cout << "\n Restarting because youre a twat" << std::endl;
		startFunc();

	}

}



void Game::Move(Character &player) {
    
    
    std::cin.clear();

	std::string North = "North";
	std::string South = "South";
	std::string East = "East";
	std::string West = "West";
    std::string choice;
	
	
         do {

		std::cout << " In what direction would you like to move? (North/East/South/West)" << std::endl;
	//	std::cout << "please use the first letter of each direction to make a choice" << std::endl;
        std::cin.clear();
        std::getline(std::cin, choice);

		if (choice == "North")  {

            player.setMoves();
            player.MoveNorth();
            Event(player);
		}
		else if (choice == "South") {
            player.setMoves();
			player.MoveSouth();
            Event(player);
		}
		else if (choice == "East") {
            player.setMoves();
			player.MoveEast(); 
            Event(player);
		}
		else if (choice == "West"){
            player.setMoves();
			player.MoveWest();
            Event(player);
		}

	    else {
			std::cout << " You will need to choose a valid direction \n" << std::endl;
			Move(player);
		}

        } while (player.getAlive() == true);
}

void Game::Play() {
	Character Player;
	startFunc();
	Player.setClass();
    Move(Player);
}

void Game::Event (Character &player) {
    
	player.getAlive();

    do {
       
        if (RandNum() == 0) {
            

            std::cout << " You have encountered a" << std::endl;
            
            break;
           // Move(player);
        }
        else if (RandNum() == 1) {
            std::cout << " You have stumbled across a" << std::endl;
            break;
          //  Move(player);
        }
        else if (RandNum() == 2) {
            std::cout << " You come across a" << std::endl;
            break;
           // Move(player);
        }
        else if (RandNum() == 3) {
            std::cout << " You approach a" << std::endl;
            break;
           // Move(player);
        }
        else if (RandNum() == 4) {
            std::cout << " You reach a" << std::endl;
            break;
            //Move(player);
        }

    }while (player.getAlive() == true);

    Move(player);
}

int Game::RandNum() {
    std::random_device rd; 
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 4);
    int outcome = dis(gen);
    return outcome;
}

void Game::EnemySpawn(Character &player, Enemy &enemy) 
{





}