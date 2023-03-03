// Sum even terms from fibonaci numbers ut to 3999999
//
// Trygve Pedersen 30.12.2021

#include <iostream>

long int term = 1;
long int term1 = 0;
long int term2 = 0;
long int termsum;
long int maxterms = 3999999;

int main()
{
    while ( term <= maxterms) {
        term2 = term1;
        term1 = term;
        term = term1 + term2;
        if ( ! ( term % 2 ) )
        {
            termsum += term;
        }     
    }
    std::cout << "Svar=" << termsum << std::endl;

    return(0);
}

