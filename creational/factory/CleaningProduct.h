#pragma once

#include "Product.h"

/**
 * @file CleaningProduct.h
 * @author 0xChristopher
 * @brief CleaningProduct classes and function declarations
 */

class CleaningProductA : public Product {

    private:
        float price = 11.25f;

    public:
        /// @brief The Operation() function creates a specific product depending on the invoked class.
        /// @return Returns a CleaningProductA
        std::string Operation() const override;

        /// @brief The GetPrice() function gets the price of the product.
        /// @return Returns the current price
        float GetPrice() const override;

};

class CleaningProductB : public Product {

    private:
        float price = 9.95f;

    public:
        /// @brief The Operation() function creates a specific product depending on the invoked class.
        /// @return Returns a CleaningProductB
        std::string Operation() const override;

        /// @brief The GetPrice() function gets the price of the product.
        /// @return Returns the current price
        float GetPrice() const override;

};