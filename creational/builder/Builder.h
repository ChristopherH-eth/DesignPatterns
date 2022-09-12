#pragma once

/**
 * @file Builder.h
 * @author 0xChristopher
 * @brief Builder Interface
 */

class Builder {

    public:
        /// @brief Builder constructor and destructor
        Builder() {}
        
        virtual ~Builder() {}

        /// @brief Pure virtual functions to be overriden in Builder implementations
        virtual void CreatePartA() const = 0;
        virtual void CreatePartB() const = 0;
        virtual void CreatePartC() const = 0;

};