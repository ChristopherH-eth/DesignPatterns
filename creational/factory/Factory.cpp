#include "Factory.h"

/**
 * @file Factory.cpp
 * @author 0xChristopher
 * @brief Factory function definitions
 */

/// Perform an action(s) with a particular product
std::string Factory::ProductOperation() const {
    Product* product = this->FactoryMethod();
    std::string result = product->Operation();

    delete product;
    return result;
}

/// Get the price of the product
float Factory::GetPrice() const {
    Product* product = this->FactoryMethod();
    float result = product->GetPrice();

    delete product;
    return result;
}