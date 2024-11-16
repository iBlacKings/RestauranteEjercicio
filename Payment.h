//
// Created by gilju on 14/11/2024.
//

#ifndef PAYMENT_H
#define PAYMENT_H



class Payment {

private:
    bool payStatus;
    bool typePayment;
    double total;
    int orderId;

public:

    Payment();
    ~Payment();

    bool getPayStatus();
    void pay();

};



#endif //PAYMENT_H
