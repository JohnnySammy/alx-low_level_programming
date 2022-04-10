#include <stdio.h>
/**
*main-Prints the alphabet in reverse
*
*Return: 0 on success
*/
int main(void)
{
char c = 'z';
while (c >= 'a')
{
utchar(c);
c--;
}
putchar('\n');
return (0);
}
