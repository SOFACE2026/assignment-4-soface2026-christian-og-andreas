#include "monkey.hpp"

// Implement this (visitor pattern)
void Monkey::accept(Visitor &visitor)
{
    visitor.visit(*this) ;
}

// Implement this (Observer part)
void Monkey::feed_banana()
{
    notify(AnimalEvent::MonkeyFed);
}