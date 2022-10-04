// Copyright (c) 2022 Tamer Zreg All rights reserved.
// .
// Created by: Tamer Zreg
// Date: Oct.3, 2022
// This program adds the Albertan sales tax to orders.

#include <iomanip>
#include <iostream>

int main() {
    float GST = 0.05;
    float subtotal;
    float tax;
    float total;
    std::cout << "Enter the subtotal of your item(s): \n>> $";
    std::cin >> subtotal;
    tax = subtotal * GST;
    total = subtotal + tax;
    std::cout << "\n";
    std::cout << "The tax is $";
    std::cout << std::fixed << std::setprecision(2)
              << std::setfill('0') << tax << std::endl;
    std::cout << "\n";
    std::cout << "The total cost of the order is $";
    std::cout << std::fixed << std::setprecision(2)
              << std::setfill('0') << total << std::endl;
}
