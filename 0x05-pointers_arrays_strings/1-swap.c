#include "main.h"
/**
* swap_int - Entry point for swapping
* @a: first int to rint
* @b: second int to print
*
*Return: void
*/
void swap_int(int *a, int *b)
{
int f;
f = *a;
*a = *b;
*b = f;
}
