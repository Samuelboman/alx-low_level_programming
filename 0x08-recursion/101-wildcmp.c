#include "main.h"

/**
 * wildcmp - Compare strings
 * @s1: pointer to string params
 * @s2: pointer to string params
 * Return: 0
 */

// Function prototype declaration
int wildcmp(const char *s1, const char *s2);

int main(void)
{
    int r;
    r = wildcmp("main.c", "*.c");
    // Rest of your code
    return 0;
}
{
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
