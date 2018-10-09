#include "Result.h"
#include "SecretCombination.h"

class ProposedCombination: public Combination
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