#include <cstdlib> //for rand()
#include <ctime> //for seeding rand()
#include "Die.h"
//constructor for initialize die
Die::Die(){
    value = 0;
    srand(static_cast<unsigned int>(time(0)));//seed random number generator
}
//function to roll die and generate a random number between 1 and 6
void Die::roll(){
    value=(rand() % 6) + 1;//die value between 1 and 6
}
//function to get current value of die
int Die::getValue() const{
    return value;
}