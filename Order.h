//
// Created by gilju on 14/11/2024.
//

#ifndef ORDER_H
#define ORDER_H

#include <vector>
#include <iostream>

#include "Dish.h"
#include "Payment.h"

class Order {

private:
    std::vector<Dish> dishesOrder;
    int tableId;
    Payment pay;
    std::string status;
    int OrderId;

public:

    Order();
    ~Order();

    void addDishesOrder();
    void payOrder();
    void getOrderStatus();
    void changeStatus();


};



#endif //ORDER_H
