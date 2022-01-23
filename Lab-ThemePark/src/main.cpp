/*****************************************************************************
 * AUTHOR      : Carlos Aguilera
 * STUDENT ID  : 1152562
 * LAB # 1     : Theme Park Day Planner
 * CLASS       : CS1B
 * SECTION     : M-W
 * DUE DATE    : 01.26.22
 ****************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>

/****************************************************************************
 * Theme Park Day Planner
 * --------------------------------------------------------------------------
 * This program will output the class heading
 * --------------------------------------------------------------------------
 * INPUT:
 * name = name of the kid
 * boolDetermination = whether user chose yes or no
 * age = age of kid
 * OUTPUT:
 * totalCost = total cost of the day
 ***************************************************************************/
void foodLogic(double *totalCost, bool isVegetarian, bool eatsCheese, const std::string &name)
{
    if(isVegetarian == false && eatsCheese == true) {
        std::cout << "Pack a cheeseburger for " << name << "\n";
        *totalCost += 3.50;
    }
    else if(isVegetarian == false && eatsCheese == false) {
        std::cout << "Pack a hamburger for " << name << "\n";
        *totalCost += 3.25;
    }
    else if(isVegetarian == true && eatsCheese == true) {
        std::cout << "Pack a cheese pizza for " << name << "\n";
        *totalCost += 2.50;
    }
    else if(isVegetarian == true && eatsCheese == false) {
        std::cout << "Pack a Happy Garden meal for " << name << "\n";
        *totalCost += 1.75;
    }
}

void ageLogic(double *totalCost, const int &age, const std::string &name)
{
    if(age > 0 && age < 5)
        std::cout << name << " will be going on the Ferris Wheel and will be visiting the Sheep Petting Zoo.\n";
    else if(age > 4 && age < 13) {
        std::cout << name << " will be going on the Tea Cups and will be playing Lazer Tag.\n";
        *totalCost += 15;
    }else if(age > 12) {
        std::cout << name << " will be going on the Roller Coaster and the Zip line.\n";
        *totalCost += 20;
    }else
        std::cout << "Invalid Age\n";
}
int main() {
	 /***********************************************************************
	  * CONSTANTS
	  * ---------------------------------------------------------------------
	  * OUTPUT - USED FOR CLASS HEADING
	  * ---------------------------------------------------------------------
	  * PROGRAMMER : Programmer's Name
	  * CLASS      : Student's Course
	  * SECTION    : Class Days and Times
	  * LAB_NUM    : Lab Number (specific to this lab)
	  * LAB_NAME   : Title of the Lab
	  **********************************************************************/
	const char PROGRAMMER[] = "Carlos Aguilera";
	const char CLASS[]      = "CS1B";
	const char SECTION[]    = "MW: 7:30p - 9:50p";
	const int LAB_NUM       = 1;
	const char LAB_NAME[]   = "Theme Park Day Planner";

    std::string name {};
    char boolDetermination {};
    int age {};
    bool isVegetarian {}, eatsCheese {};
    double totalCost {};


	/************************************************************************
	 * OUTPUT - Class Heading
	 ***********************************************************************/
	std::cout << std::left;
	std::cout << "****************************************************\n";
	std::cout << "*   PROGRAMMED BY : " << PROGRAMMER << std::endl;
	std::cout << "*   " << std::setw(14) <<"CLASS" << ": " << CLASS << std::endl;
	std::cout << "*   " << std::setw(14) <<"SECTION" << ": " << SECTION << std::endl;
	std::cout << "*   LAB #" << std::setw(9) << LAB_NUM << ": " << LAB_NAME << std::endl;
	std::cout << "****************************************************\n\n";
	std::cout << std::right;

    for(size_t i {0}; i < 10; i++)
    {
        if(i != 0)
            std::cin.ignore(100,'\n');
        std::cout << "What is your kid's name? ";
        std::getline(std::cin,name);
        name = name.substr(0, name.find(" "));
        std::cout << "How old is the kid? ";
        std::cin >> age;
        std::cin.ignore(100,'\n');
        std::cout << "Vegetarian (Y/N) ";
        std::cin.get(boolDetermination);

        if(boolDetermination == 'Y' || boolDetermination == 'y')
            isVegetarian = true;
        else
            isVegetarian = false;

        std::cin.ignore(100,'\n');
        std::cout << "Does he/she like cheese? ";
        std::cin.get(boolDetermination);

        if(boolDetermination == 'Y' || boolDetermination == 'y')
            eatsCheese = true;
        else
            eatsCheese = false;
        
        ageLogic(&totalCost, age, name);
        foodLogic(&totalCost, isVegetarian, eatsCheese, name);
        std::cout << "\n---------------\n";
    }
    std::cout << "The total cost of the day is: " << std::fixed << std::setprecision(2) << totalCost << "\n";
    std::cout << "The average cost per kid is: " << totalCost/10 << "\n";
}