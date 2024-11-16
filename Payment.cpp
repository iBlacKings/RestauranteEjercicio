//
// Created by gilju on 14/11/2024.
//

#include "Payment.h"


Payment::Payment(double total, int orderId) : total(total), orderId(orderId), typePayment(false), payStatus(false){}


Payment::~Payment() = default;

void Payment::pay() {

    char tpayment;

    std::cout << "Type of payment  'C' = Cash / 'V' = Credit Card: ";

    std::cin >> tpayment;

    tpayment = toupper(tpayment);

    while (true) {

        if (std::cin.fail() || (tpayment != 'C' || tpayment != 'V' )) {

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin.clear();
            std::cout << "Type a CORRECT option\n";
        }

        break;
    }

    (tpayment == 'C')? typePayment=false : typePayment=true;

    if (!typePayment) {
        double amount;
        std::cout << "Amount given: ";
        std::cin >> amount;

        std::cout << "The return is: " << total-amount << std::endl;
    }
    else {
        std::cout << "Go to the dataphone\n";
    }

    payStatus = true;

    std::cout << "Order Complete";
}

bool Payment::getPayStatus() {
    return payStatus;
}

