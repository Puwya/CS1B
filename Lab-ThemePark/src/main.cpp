/*

*/
#include <iostream>
#include <string>
#include <iomanip>

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

int main()
{
    std::string name {};
    char boolDetermination {};
    int age {};
    bool isVegetarian {}, eatsCheese {};
    double totalCost {};

    for(size_t i {0}; i < 10; i++)
    {
        std::cout << "What is your kid's name? ";
        std::getline(std::cin,name);
        name.substr(0, name.find(" "));
        std::cout << "How old is the kid? ";
        std::cin >> age;
        std::cout << "Vegetarian (Y/N) ";
        std::cin >> boolDetermination;

        if(boolDetermination == 'Y' || boolDetermination == 'y')
            isVegetarian = true;
        else
            isVegetarian = false;

        std::cout << "Does he/she like cheese? ";
        std::cin >> boolDetermination;

        if(boolDetermination == 'Y' || boolDetermination == 'y')
            eatsCheese = true;
        else
            eatsCheese = false;
        
        ageLogic(&totalCost, age, name);
        foodLogic(&totalCost, isVegetarian, eatsCheese, name);
        std::cout << "---------------\n";
    }
    std::cout << "The total cost of the day is: " << std::fixed << std::setprecision(2) << totalCost << "\n";
    std::cout << "The average cost per kid is: " << totalCost/10 << "\n";
}