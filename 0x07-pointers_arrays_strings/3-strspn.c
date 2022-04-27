/**
*_strspn - gets the length of a prefix substring
* @s: segment to compare bytes from
* @accept: string of bytes to compare with
* Return: number of bytes in segment s which consist of bytes from accept
*/
unsigned int_strspn(char *s, char *accept)
{
unsigned int i;
i = 0;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0' && s[i] != accept[j])
j++;
if (accept[j] == '\0')
return (i);
i++;
}
return (i);
}
