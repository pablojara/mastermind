#include "include/SecretCombination.h"
#include <iostream>

SecretCombination::SecretCombination()
{
    combination = new char[4];
    for(int i = 0; i < 4; i++)
    {
        combination[i] = 'X';
    }

}

void SecretCombination::printSecretCombination()
{
    std::cout << "Secret combination: ";

    for(int i = 0; i < 4; i++)
    {
        std::cout << combination[i];
    }

    std::cout << std::endl;

}