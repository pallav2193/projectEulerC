/*
Problem-2
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/

#define startNo 1
#define endNo 4.0e+6
int main()
{
    double fibValCurrent=1,fibValLast=0,fibVal=0,fibEvenSum=0;
    while(fibVal<=endNo)
    {
        fibVal=fibValCurrent+fibValLast;
        if((int)fibVal  %   2   ==  0)
        {
            fibEvenSum=fibEvenSum+fibVal;
        }
        fibValCurrent=fibValLast;
        fibValLast=fibVal;
    }
    printf("Sum of even-valued Fibonacci terms is %f",fibEvenSum);
    return 0;
}



