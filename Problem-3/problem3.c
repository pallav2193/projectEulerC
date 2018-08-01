/*
Problem-3
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?

*/
#include<stdio.h>
unsigned long long largestPrimeFactors(unsigned long long);

int main()
{
    unsigned long long  largestPrimeFactor;
    unsigned long long input = 600851475143;
    printf("%llu\n",input);
    largestPrimeFactor=largestPrimeFactors(input);
    printf("Largest Prime Factor is %llu\n",largestPrimeFactor);
    return 0;
}

unsigned long long largestPrimeFactors(unsigned long long input)
{
    int loopVar=2;
    unsigned long long primeFactor=1;
    unsigned long long calPrime=input;
    while(calPrime>1)
    {
        while(calPrime % loopVar == 0)
        {
            primeFactor=loopVar;
            calPrime=calPrime/loopVar;
        }
    //printf("Current Prime Factor %llu   loopVar %d \n",primeFactor,loopVar);
    loopVar=loopVar+1;
    }

    return primeFactor;
}

