#include <stdio.h>
#include <stdlib.h>
//input num
// get the divisors of that number
// sum of divisors
// if sum = the input numb ;;;; is a perfect num

int main()
{
    int x;
    printf("perfect number!!?\nplease ENTER a number to CHECK\n");
    scanf("%d",&x);         //x is the input number
    int a=1;               // a is the divisor
    int sum=0;            //sum is the sum of divisors
    for(a ;a<x;a++)
    {
        if(x%a==0)
            sum=sum+a;

    }
    if (sum==x)
        printf("%d is a perfect number",x);
    else
        printf("it is not a perfect number");

}
