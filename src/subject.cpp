#include "subject.hpp"

// Implement this (Observer part)
void Subject::attach(Observer *subscriber)
{
    this->subscribers.push_back(subscriber);
}

// Implement this (Observer part)
void Subject::detach(Observer *subscriber)
{

    //Go through the list and find the index of the given subscriber
    int i = 0;
    for(i = 0;i<this->subscribers.size();i++){
        if(this->subscribers[i] == subscriber){
            break;
        }
    }
    //remove the index when found
    this->subscribers.erase(this->subscribers.begin()+i);
}

// Implement this (Observer part)
void Subject::notify(AnimalEvent event)
{
    //Iterate through the subscribers list and call update on each
    for(int i = 0;i<this->subscribers.size();i++){
        this->subscribers[i]->update(event);
    }
}