#include <iostream>
#include "Director.h"
#include "SandwichBuilder.h"

/**
 * @file Customer.cpp
 * @author 0xChristopher
 * @brief This file is the entry point for the Sandwich Builder. Customer requests to build sandwiches are 
 *        also contained here, but could be designated into a separate class should they require more
 *        complexity (this is merely for demonstration). 
 * 
 *        In this instance of the Builder design pattern, a new SandwichBuilder object is created, with which
 *        the Director object is used to create various Sandwich object instances. This can be built upon to
 *        increase its complexity, such as adding specific items, as well as allowing for customer 
 *        cusomtization of sandwiches.
 */

/// Make requests to the director via a specific builder
void CustomerRequests(Director& director) {
    /// Instantiate new builder and set to director
    SandwichBuilder* builder = new SandwichBuilder;
    director.SetBuilder(builder);

    /// Build default sandwich
    std::cout << "Default Sandwich: \n" << std::endl;

    director.BuildSandwich();
    Sandwich* sandwich = builder->GetProduct();
    sandwich->DisplayIngredients();

    delete sandwich;
    delete builder;
}

int main() {
    /// Instantiate new director and pass it into CustomerRequests
    Director* director = new Director;
    CustomerRequests(*director);

    delete director;

    std::cin.get();
}