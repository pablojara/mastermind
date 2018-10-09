#include "include/SecretCombination.h"
#include <iostream>

SecretCombination::SecretCombination()
{
    combination = new char[4];
    for(int i = 0; i < 4; i++)
    {
        combination[i] = 'R';
    }

}

void SecretCombination::printCombination()
{
    std::cout << "Secret combination: ";

    for(int i = 0; i < 4; i++)
    {
        std::cout << this->combination[i];
    }

    std::cout << std::endl;

}

char *SecretCombination::getCombination()
{
    return this->combination;
}
