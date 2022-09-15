#pragma once

#include "Product.h"

/**
 * @file CleaningProduct.h
 * @author 0xChristopher
 * @brief CleaningProduct classes and function declarations
 */

class CleaningProductA : public Product {

    public:
        /// @brief The Operation() function creates a specific product depending on the invoked class.
        /// @return Returns a CleaningProductA
        std::string Operation() const override;

};

class CleaningProductB : public Product {

    public:
        /// @brief The Operation() function creates a specific product depending on the invoked class.
        /// @return Returns a CleaningProductB
        std::string Operation() const override;

};