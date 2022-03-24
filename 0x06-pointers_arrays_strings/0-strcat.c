#include main.h
/**
 * strcat: concatenate two strings together @src to @dest
 * @dest: char type string-- the destination string
 * @src: char type string-- source string
 * Description: appends src string to the dest string, overwriting the terminating null byte
 * Return: pointer to the resulting string 
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index =0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
