//
// Created by gilju on 14/11/2024.
//

#ifndef TABLE_H
#define TABLE_H

#include <iostream>
#include <vector>

class Table {

private:
    int id;
    int max;
    bool availability;
    std::vector<Order> OrdersTable;

public:

    Table();
    ~Table();

    bool getAvailability();
    int getId();
    int getMax();
    void freeTable();
    void ocpTable();

};



#endif //TABLE_H
