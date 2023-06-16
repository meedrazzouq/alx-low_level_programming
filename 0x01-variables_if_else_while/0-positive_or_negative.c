#include <stdio.h>
#include <math.h>
#include <time.h>
/**
 * main - a program that assign a randon number to a variable n and the ckeck if the number is positive or negtive and print a line for the result
 * Retun: 0 if the program has no erro
 */
int main(void)
{
int n;
srand(time(0));
n= n = rand() - RAND_MAX / 2;
if(n>0)
{
  printf("%d is positive", n);
}
else if(n<0)
{
  printf("%d is negative", n);
}
else 
{
 i printf("%d is zero", n);
}
return(0);
}


