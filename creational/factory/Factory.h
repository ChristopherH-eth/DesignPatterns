#pragma once

#include "Product.h"

/**
 * @file Factory.h
 * @author 0xChristopher
 * @brief Factory function declarations
 */

class Factory {

    public:
        /// @brief Factory constructor and destructor
        Factory() {}

        virtual ~Factory() {}

        /// @brief Pure virtual function to be overridden in Factory implementations
        /// @return Returns a factory depending on which is invoked
        virtual Product* FactoryMethod() const = 0;

        /// @brief The ProductOperation() function performs actions with a particular product.
        /// @return Returns the result of the operation
        std::string ProductOperation() const;

};