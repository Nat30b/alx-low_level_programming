#include <stdlib.h>
#include <time.h>
/**
 *main = main entry
 *Return: 0
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
printf("Enter number n: %d\n");
scanf("%d", &n);
if(n>0){
printf("%d is positive\n", n);
}
else if(n==0){
printf("%d is zero\n", n);
}
else if(n<0){
printf("%d is negative\n", n);
}
return (0);
}