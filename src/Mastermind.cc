#include "include/Mastermind.h"
#include <iostream>

Mastermind::Mastermind()
{

}

SecretCombination Mastermind::getSecretCombination()
{
    return secretCombination;
}

int main()
{

    Mastermind mastermind;
    mastermind.getSecretCombination().printSecretCombination();

}

