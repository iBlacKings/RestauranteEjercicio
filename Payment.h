//
// Created by gilju on 14/11/2024.
//

#ifndef PAYMENT_H
#define PAYMENT_H

#include <iostream>
#include <limits>


class Payment {

private:
    bool payStatus; //always it starts on false
    bool typePayment; //False = cash / True = vcc
    double total;
    int orderId;

public:

    Payment(double total, int orderId);
    ~Payment();

    bool getPayStatus();
    void pay();

};



#endif //PAYMENT_H
