#pragma once

#include <string>

/**
 * @file Product.h
 * @author 0xChristopher
 * @brief Product Interface
 */

class Product {

    public:
        /// @brief Product constructor and destructor
        Product() {}

        virtual ~Product() {}

        /// @brief Pure virtual function to be overridden in Product implementations
        /// @return Returns a string regarding the product operation
        virtual std::string Operation() const = 0;

        /// @brief Pure virtual function to be overridden in Product implementations
        /// @return Returns a float price
        virtual float GetPrice() const = 0;

};