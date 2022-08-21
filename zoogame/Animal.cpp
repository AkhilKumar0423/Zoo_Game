/*******************************************************************************
** Description: Animal class source file.
*******************************************************************************/
#include "Animal.hpp"

/*******************************************************************************
** Function Name: Default Constructor.
** Description: Assigns certain attributes to their base level and sets age
** to be 104weeks(2 years) old.
** Parameters: N/a
** Pre-Conditions: Object must be created.
** Post-Condition: Values set according to animals.
*******************************************************************************/
Animal::Animal() {
	age = 104;
	cost = 0;
	sick = 0;
	numBabies = 1;
	baseFoodCost = 25;
	payoff = 0;
	type = "Generic Animal";
}
/*******************************************************************************
** Function Name: Parameterised Constructor.
** Description: Sets the animal's age.
** Parameters: integer value "a".
** Pre-condition: Object must be created and value for parameter must be passed.
** Post-condition: setting age to input parameter "a".
*******************************************************************************/
Animal::Animal(int a) {
	age = a;
}
/*******************************************************************************
** Function Name: Default Destructor.
** Description: Destructor.
** Parameter: N/a
** Pre-condition: Object of class Animal exists.
** Post-condition: Object of class Animal deleted.
*******************************************************************************/
Animal::~Animal() {
}
/*******************************************************************************
** Function Name: Get Type
** Description: Returns the type of animal it is in the form of a string.
** Parameter: N/a
** Pre-condition: N/a
** Post-condition: Type of Aniamal is returned.
*******************************************************************************/
std::string Animal::getType() {
	return type;
}
/*******************************************************************************
** Function Name: Get Age
** Description: Returns the age, in weeks.
** Parameter: N/a
** Pre-condition: N/a 
** Post-condition: Animal's age is returned (in weeks).
*******************************************************************************/
int Animal::getAge() {
	return age;
}
/*******************************************************************************
** Function Name: Get Sick
** Description: Returns the cureness cost of sick Animal.
** Parameter: N/a
** Pre-condition: N/a
** Post-condition: cureness cost is returned.
*******************************************************************************/
int Animal::getSick() {
	return sick;
}
/*******************************************************************************
** Function Name: Get Cost
** Description: Returns the cost of the animal.
** Parameter: N/a
** Pre-condition: N/a
** Post-condition: cost of animal is returned
*******************************************************************************/
int Animal::getCost() {
	return cost;
}
/*******************************************************************************
** Function Name: Get Base Food Cost.
** Description: Returns the base food cost.
** Parameter: N/a
** Pre-condition: N/a
** Post-condition: Base Food cost is returned.
*******************************************************************************/
int Animal::getBaseFoodCost() {
	return baseFoodCost;
}
/*******************************************************************************
** Function Name: Get Payoff.
** Description: Returns the payoff of the animal (How much money it makes).
** Parameter: N/a
** Pre-condition: N/a
** Post-condition: Revenue is returned
*******************************************************************************/
int Animal::getPayoff() {
	return payoff;
}
/*******************************************************************************
** Function Name: Get Num Babies.
** Description: Returns the number of babies the animal can have.
** Parameter: N/a
** Pre-condition: N/a
** Post-condition: Number of babies is a returned the animal can have.
*******************************************************************************/
int Animal::getNumBabies() {
	return numBabies;
}
/*******************************************************************************
** Function Name: Age One Week.
** Description: Makes the animal one week older.
** Parameter: N/a
** Pre-condition: N/a
** Post-condition: Increases the age of animal by one week.
*******************************************************************************/
void Animal::ageOneWeek() {
	age++;
}
