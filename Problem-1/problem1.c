/*
Problem-1
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/
#include<stdio.h>

int main()
{
    int start=1,countVar;
    int end=1000;
    int sum=0;
    for(countVar=start;countVar<end;countVar++)
    {
        if(countVar%3==0)
        {
            sum=sum+countVar;
            //printf("%d is multiple of 3\n",countVar);
        }
        else if(countVar%5==0)
        {
            sum=sum+countVar;
            //printf("%d is multiple of 5\n",countVar);
        }
        else
        {
            continue;
        }

    }
    printf("The sum of all the multiples of 3 or 5 below 1000:\t %d",sum);
    return 0;
}
