// Program som summerer modulo 3 og modulo 5 tall mellom 1 og 999
//
// Trygve Pedersen 29.12.2021

#include <iostream>

int start = 1;
int stop = 999;
int counter;
long sum;

int main ()
{
for  (counter = start ; counter <= stop ; counter++ )
    {
        if  ( ! (counter % 3) || ! (counter % 5 ) ) 
        {
            sum += counter;
            std::cout << (sum) << std::endl;
        }
    }
    return 0;
}