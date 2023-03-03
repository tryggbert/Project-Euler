// Program som summerer modulo 3 og modulo 5 tall mellom 1 og 999
//
// Multiples of 3 or 5
// Show HTML problem content 
// Problem 1
// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
//
//Find the sum of all the multiples of 3 or 5 below 1000.
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