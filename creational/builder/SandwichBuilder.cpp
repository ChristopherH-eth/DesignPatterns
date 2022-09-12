#include "SandwichBuilder.h"

/**
 * @file SandwichBuilder.cpp
 * @author 0xChristopher
 * @brief SandwichBuilder function definitions
 */

/// Create a new sandwich object
void SandwichBuilder::Reset() {
    this->sandwich = new Sandwich();
}

/// Add ingredient of type A to sandwich
void SandwichBuilder::CreatePartA() const {
    this->sandwich->ingredients.emplace_back("ingredientA1");
}

/// Add ingredient of type B to sandwich
void SandwichBuilder::CreatePartB() const {
    this->sandwich->ingredients.emplace_back("ingredientB1");
}

/// Add ingredient of type C to sandwich
void SandwichBuilder::CreatePartC() const {
    this->sandwich->ingredients.emplace_back("ingredientC1");
}

/// Returns the current sandwich object and resets the builder
Sandwich* SandwichBuilder::GetProduct() {
    Sandwich* sandwichItem = this->sandwich;
    this->Reset();
    return sandwichItem;
}