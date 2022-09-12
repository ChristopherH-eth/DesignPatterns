#pragma once

#include <iostream>
#include "Builder.h"

/**
 * @file Director.h
 * @author 0xChristopher
 * @brief Director function delcarations
 */

class Director {

    private:
        Builder* builder;   /// Current builder being used by the director

    public:
        /// @brief Director constructor and destructor
        Director() {}

        ~Director() {
            std::cout << "(director destroyed)" << std::endl;
        }

        /// @brief The SetBuilder() function sets the builder for the director to use
        /// @param builder Type of builder being set
        void SetBuilder(Builder* builder);

        /// @brief The BuildSandwich() function builds a default sandwich object
        void BuildSandwich();

        /// @brief The BuildTheWorksSandwich() function builds a sandwich object including all ingredients
        void BuildTheWorksSandwich();

};