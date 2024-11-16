//
// Created by gilju on 14/11/2024.
//

#include "Menu.h"

#include <algorithm>

Menu::Menu() {}

Menu::~Menu() = default;

void Menu::addDish() {

    std::cout << "------- ADD A DISH TO THE MENU -------\n";


    std::string nameDish;

    std::cout << "Name:";
    std::getline(std::cin >> std::ws, nameDish);


    double price;

    std::cout << "Price:";
    std::cin >> price;


    int type;

    std::cout << "Select the type.\n";
    std::cout << "1.Starter.\n";
    std::cout << "2.Main Course\n";
    std::cout << "3.Dessert\n";
    std::cout << "4.Drink\n";

    while (true) {

        std::cin >> type;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Choose correctly\n";
        }
        break;
    }

    switch (type) {

        case 1:
            starter.push_back(new Dish(nameDish, "Starter", price ));break;
        case 2:
            mainCourse.push_back(new Dish(nameDish, "Main Course", price ));break;
        case 3:
            dessert.push_back(new Dish(nameDish, "Dessert", price ));break;
        case 4:
            drinks.push_back(new Dish(nameDish, "Drink", price ));break;
        default:
            //Do nothing
    }
}

void Menu::showMenu() {

    std::cout << "-------- Starters --------\n";

    for (const auto& starterDish: starter) {

        std::cout << starterDish->getName() << std::endl;
    }

    std::cout << "-------- Main Courses --------\n";

    for (const auto& mainCourseDish: mainCourse) {

        std::cout << mainCourseDish->getName() << std::endl;
    }

    std::cout << "-------- Desserts --------\n";

    for (const auto& dessertDish: dessert) {

        std::cout << dessertDish->getName() << std::endl;
    }

    std::cout << "-------- Drinks --------\n";

    for (const auto& drinkDish: drinks) {

        std::cout << drinkDish->getName() << std::endl;
    }

}



