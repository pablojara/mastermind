#include "Result.h"
#include "SecretCombination.h"

class ProposedCombination
{
    public:
        ProposedCombination(); 
        char  *getCombination();
        void readCombination();
        void calculateResult(SecretCombination secretCombination);
        void printCombination();
        void printResult();
        bool checkWin();

    private:
        char *combination;
        Result result;



};