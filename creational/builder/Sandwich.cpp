#include <iostream>
#include "Sandwich.h"

/**
 * @file Sandwich.cpp
 * @author 0xChristopher
 * @brief Sandwich function definitions
 */

/// Display the ingredients of the current sandwich
void Sandwich::DisplayIngredients() const {
    std::cout << "This sandwich includes: " << std::endl;

    for (int i = 0; i < ingredients.size(); i++) {
        std::cout << ingredients[i] << " " << std::endl;
    }
}