/**
 * main - check the code.
 *
 * Return: Always 0.
 */
#include <stdio.h>

int print_sign(int n)
{
if (n > 0)
{
printf("+");
return (1);
}
else if (n == 0)
{
printf("0");
return (0);
}
else
{
printf("-");
return (-1);
}
}

int main(void)
{
int n = 10;
int sign = print_sign(n);

printf("The sign of %d is %d\n", n, sign);

return (0);
}
