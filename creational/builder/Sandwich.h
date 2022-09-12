#pragma once

#include <vector>
#include <string>

/**
 * @file Sandwich.h
 * @author 0xChristopher
 * @brief Sandwich function delcarations
 */

class Sandwich {

    public:
        std::vector<std::string> ingredients;   /// List of sandwich ingredients

        /// @brief Sandwich constructor and destructor
        Sandwich() {}

        ~Sandwich() {
            std::cout << "(sandwich object destroyed)" << std::endl;
        }

        /// @brief The DisplayIngredients() function displays the ingredients included in a sandwich.
        void DisplayIngredients() const;

};