#include "main.h"
#include <string.h>
/**
*_memset - fills a block of memory with a specific value
*@s: puts a char s
*@b: puts a char b
*@n: puts an integer n
*Return: Pointer to memory area
*/
char *_memset(char *s, char b, unsigned int n)
{	
	int i = 0;

	for(; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
	
