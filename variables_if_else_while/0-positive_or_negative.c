/*
 * File : 0-positive_or_negative.c
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* headers goes there */ 
/* betty style doc for function main goes there */
int main(void)
{
   int n;
   srand(time(0));
   n = rand() - RAND_MAX / 2;
   /* Code goes there */
   if (n > 0)
   	printf("%d is positive\n", n);
   else if (n < 0)
	   printf("%d is negative\n", n);
   else
	   printf("%d is zero\n", n);
   return (0);
}
