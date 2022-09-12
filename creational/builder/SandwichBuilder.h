#pragma once

#include <iostream>
#include "Builder.h"
#include "Sandwich.h"

/**
 * @file SandwichBuilder.h
 * @author 0xChristopher
 * @brief SandwichBuilder function delcarations
 */

class SandwichBuilder : public Builder {

    private:
        Sandwich* sandwich;

    public:
        /// @brief SandwichBuilder constructor and destructor
        SandwichBuilder() {
            this->Reset();
        }

        ~SandwichBuilder() {
            delete sandwich;
            std::cout << "(sandwich builder destroyed)" << std::endl;
        }

        /// @brief The Reset() function creates a new sandwich object
        void Reset();

        /// @brief The CreatePartA() function adds an 'A' ingredient to a sandwich
        void CreatePartA() const override;

        /// @brief The CreatePartB() function adds an 'B' ingredient to a sandwich
        void CreatePartB() const override;

        /// @brief The CreatePartC() function adds an 'C' ingredient to a sandwich
        void CreatePartC() const override;

        /// @brief The GetProduct() function returns the built sandwich and resets the builder
        /// @return Returns the current sandwich object
        Sandwich* GetProduct();

};