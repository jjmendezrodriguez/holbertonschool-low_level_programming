#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns the length
 *
 * @s: value of variable
 *
 * Return: return the length
 */

int _strlen(char *s)
{
        int length = 0;

        while (s[length] != '\0')
        {
                length++;
        }

        return (length);
}
