//
// Created by gilju on 14/11/2024.
//

#include "Dish.h"

Dish::Dish(std::string name, std::string type, double price) : name(name), type(type), price(price) {}

Dish::~Dish() = default;

double Dish::getPrice() const {
    return price;
}

std::string Dish::getType() const {
    return type;
}

std::string Dish::getName() const{
    return name;
}




