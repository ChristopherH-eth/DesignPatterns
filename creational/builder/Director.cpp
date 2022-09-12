#include "Director.h"

/**
 * @file Director.cpp
 * @author 0xChristopher
 * @brief Director function definitions
 */

/// Sets the builder from the Customer
void Director::SetBuilder(Builder* builder) {
    this->builder = builder;
}

/// Builds a default sandwich
void Director::BuildSandwich() {
    this->builder->CreatePartA();
    this->builder->CreatePartB();
}

/// Builds a sandwich with all available ingredients
void Director::BuildTheWorksSandwich() {
    this->builder->CreatePartA();
    this->builder->CreatePartB();
    this->builder->CreatePartC();
}