//
// Created by gilju on 14/11/2024.
//

#ifndef DISH_H
#define DISH_H

#include <iostream>


class Dish {

private:
    std::string name;
    std::string type;
    double price;

public:
    Dish(std::string name, std::string type, double price);
    ~Dish();
    double getPrice() const;
    std::string getType() const;
    std::string getName() const;

};



#endif //DISH_H
