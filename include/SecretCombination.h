#include "Combination.h"

class SecretCombination: public Combination
{

    public:
        SecretCombination();
        void printCombination();
        EnumColor *getCombination();

    private:
        EnumColor *combination;        

};




