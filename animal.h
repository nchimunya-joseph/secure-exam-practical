#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>

class Animal
{
    friend std::ostream &operator<<(std::ostream &out, Animal &oparand);

public:
    virtual void print_info(std::ostream &out) = 0;
    // change nothing above this
    // your code goes below this
};

#endif // ANIMAL_H
