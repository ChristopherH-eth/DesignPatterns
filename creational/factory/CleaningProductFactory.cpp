#include "CleaningProductFactory.h"
#include "CleaningProduct.h"

/**
 * @file CleaningProductFactory.cpp
 * @author 0xChristopher
 * @brief CleaningProductFactory function definitions
 */

/// Create a CleaningProductA
Product* CleaningProductFactoryA::FactoryMethod() const {
    return new CleaningProductA();
}

/// Create a CleaningProductA
Product* CleaningProductFactoryB::FactoryMethod() const {
    return new CleaningProductB();
}