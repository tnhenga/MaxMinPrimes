// Name: Tanaka Nhenga 

// Task (Below) 
// Write a program (primes.cpp) which takes 2 input values min and max, and 
// prints all the prime numbers between min and max. For example, "./primes 2 10" will output 2 3 5 7.
#include <iostream>
#include <stdio.h> 
#include <string.h> 
#include <math.h>
using namespace std; 
  
int main() 
{ 
    int min;
    int max;
    int i;
    int j;
    int verify; // verifies is a given integer within the range the user enters is considered a prime number or not.
    // verify = 1 (yes), verify = 0 (no)
  
    cout << "Please enter the minimum value: "; 
    cin >> min; // Take input 
    cout << "Please enter the maximum value: "; 
    cin >> max; // Take input 
  
    cout << "\nThe prime numbers that are between "
    << min << " and " << max << " are: "; 
  

    for (i = min; i <= max; i++) { 
        // 0 & 1 are not prime values. Will start from 2 onwards.
        if (i == 0 || i == 1) 
            continue; 
  
        // tests if i qualifies as a prime number.
        verify = 1; 
        for (j = 2; j <= i/2; ++j) { 
            if (i%j == 0) { 
                verify = 0; 
                break; 
            } 
        } 
  
        // verification process
        if (verify == 1) 
            cout << i << " "; 
    } 
    return 0; 
} 