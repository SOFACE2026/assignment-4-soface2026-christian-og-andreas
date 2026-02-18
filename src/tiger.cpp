#include "tiger.hpp"

// Implement this (visitor pattern)
void Tiger::accept(Visitor &visitor)
{
    visitor.visit(* this ) ;
}

// Implement this (Observer part)
void Tiger::scratch_back()
{
    notify(AnimalEvent::TigerScratched);
}