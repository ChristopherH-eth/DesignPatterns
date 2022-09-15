#pragma once

#include "Factory.h"

/**
 * @file CleaningProductFactory.h
 * @author 0xChristopher
 * @brief CleaningProductFactory class and function declarations
 */

class CleaningProductFactoryA : public Factory {

    public:
        /// @brief The FactoryMethod() function creates an instance of the product type it represents.
        /// @return Returns an instance of CleaningProductA
        Product* FactoryMethod() const override;

};

class CleaningProductFactoryB : public Factory {

    public:
        /// @brief The FactoryMethod() function creates an instance of the product type it represents.
        /// @return Returns an instance of CleaningProductA
        Product* FactoryMethod() const override;

};