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

void SecretCombination::printSecretCombination()
{
    std::cout << "Secret combination: ";

    for(int i = 0; i < 4; i++)
    {
        std::cout << '*';
    }

    std::cout << std::endl;

}

char *SecretCombination::getCombination()
{
    return this->combination;
}


