//
// Created by gilju on 14/11/2024.
//

#ifndef MENU_H
#define MENU_H

#include <vector>
#include <iostream>
#include <limits>
#include <string>

#include "Dish.h"

class Menu {

private:
    std::vector<Dish*> starter;
    std::vector<Dish*> mainCourse;
    std::vector<Dish*> dessert;
    std::vector<Dish*> drinks;

public:

    Menu();
    ~Menu();

    void showMenu();
    void addDish();

};



#endif //MENU_H
