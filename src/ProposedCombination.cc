#include "include/ProposedCombination.h"
#include <iostream>

ProposedCombination::ProposedCombination()
{

}

char *ProposedCombination::getCombination()
{
    return this->combination;
}

void ProposedCombination::readCombination()
{
    this->combination = new char[4];

    std::cout << "Enter the proposed combination (Allowed colores are \033[1;31mR\033[0m, \033[1;32mG\033[0m, \033[1;34mB\033[0m, \033[1;33mY\033[0m): ";

    for(int i = 0; i < 4; i ++)
    {
        std::cin >> this->combination[i];
    }

}

void ProposedCombination::calculateResult(SecretCombination secretCombination)
{
    char *secretCombinationArray = secretCombination.getCombination();
    for(int i = 0; i < 4; i++)
    {
        if(this->combination[i] == secretCombinationArray[i])
        {
            this->result.setHit(i);
        }
    }

}

void ProposedCombination::printCombination()
{
    for(int i = 0; i < 4; i++)
    {   
        switch(this->combination[i]) /* Print colored text in the console using ASCII code */
        {
            case 'R':
                std::cout <<  "\033[1;31mR  \033[0m";
                break;
            case 'G':
                std::cout <<  "\033[1;32mG  \033[0m";
                break;
            case 'B':
                std::cout <<  "\033[1;34mB  \033[0m";
                break;
            case 'Y':
                std::cout <<  "\033[1;33mY  \033[0m";
                break;
            default:
                break;
        }
    }
}

bool ProposedCombination::checkWin()
{
    return this->result.checkWin();
}

void ProposedCombination::printResult()
{
    this->result.printResult();
}