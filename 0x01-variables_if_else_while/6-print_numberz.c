#include <stdio.h>
/**
*main -Prints numers 0-9 without char or printf/puts
*
*Return: 0 on success
*/
int main(void)
{
int i = '0';
while (i <= '9')
{
putchar(i);
i++;
}
putchar('\n');
return (0);
}
