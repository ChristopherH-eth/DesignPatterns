#include "CleaningProduct.h"

/**
 * @file CleaningProduct.h
 * @author 0xChristopher
 * @brief CleaningProduct function definitions
 */

/**************************************************
 * @see Product A function definitions
 *************************************************/

/// Interact with a CleaningProductA
std::string CleaningProductA::Operation() const {
    return "Doing stuff with [CleaningProductA]";
}

float CleaningProductA::GetPrice() const {
    return this->price;
}

/***************************************************
 * @see Product B function definitions
 **************************************************/

/// Interact with a CleaningProductB
std::string CleaningProductB::Operation() const {
    return "Doing stuff with [CleaningProductB]";
}

float CleaningProductB::GetPrice() const {
    return this->price;
}