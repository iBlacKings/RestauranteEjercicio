//
// Created by gilju on 14/11/2024.
//

#ifndef RESTAURANT_H
#define RESTAURANT_H
#include <vector>
#include <iostream>
#include "Dish.h"
#include "Menu.h"
#include "Order.h"
#include "Payment.h"
#include "Table.h"


class Restaurant {

private:
    Menu menu;
    std::vector<Order> orders;
    std::vector<Table> tables;

public:
    void addDishRestaurant();
    void addTable();
    void assigTable();
    Table searchTable();
};



#endif //RESTAURANT_H
