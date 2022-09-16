#include <iostream>
#include "Factory.h"
#include "CleaningProductFactory.h"

/**
 * @file Customer.cpp
 * @author 0xChristopher
 * @brief This file is the entry point for the Cleaning Product Factory example implementation. It provides a
 *        limited functionality example of the Factory design pattern, which can then be elaborated on to 
 *        include much more functionality. Each product and factory are instantiated based on an interface.
 * 
 *        In this implementation, CleaningProductFactories are created (later functionality may include
 *        allowing the customer to choose a product which then initializes the factory) which the customer
 *        performs operations on. This interaction is then sent back to the factory, which then coordinates
 *        the functions invoked via CustomerRequests.
 */

/// @brief The CustomerRequests() function can perform an operation on a product created by a factory.
/// @param factory The CleaningProductFactory instance to be used with client side iteractions
void CustomerRequests(const Factory& factory) {
    std::cout << "I'm: " << factory.ProductOperation() << std::endl;
    std::cout << "I paid " << factory.GetPrice() << "\n" << std::endl;
}

int main() {
    /// Create CleaningProductA factory instance
    std::cout << "Creating a CleaningProductA factory..." << std::endl;
    Factory* factory1 = new CleaningProductFactoryA();
    CustomerRequests(*factory1);

    /// Create CleaningProductB factory instance
    std::cout << "Creating a CleaningProductB factory..." << std::endl;
    Factory* factory2 = new CleaningProductFactoryB();
    CustomerRequests(*factory2);

    delete factory1;
    delete factory2;
}