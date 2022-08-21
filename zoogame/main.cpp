/*******************************************************************************
** Program: zoo_tycoon.cpp
** Author:Lei Sun
** Date:07-27-2022
** Description: Zoo Tycoon! A player begins with a certain amount of money in
** the bank. They have the option to buy animals for their zoo and must pay
** the related upkeep costs for their animals food and treatment. Players have
** the opportunity to earn money through zoo admissions.
** Input:Enter the number corresponding to the choice to play the game.
** Output:Displaying details per week of the zoo.
*******************************************************************************/
#include <iostream>
#include <string>

#include "Zoo.hpp"

int main() {
  std::cout<<"Game started"<<std::endl;
	Zoo zoo1;

	zoo1.playGame();

	return 0;
}
