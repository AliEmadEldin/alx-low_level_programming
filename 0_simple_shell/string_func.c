#include<stdio.h>
#include<shell.h>
/*
 * _strlen - return the length of the string
 * @s: the string whose length to check
 * return: int length of string
 **/
int _strlen(char*s){
	int i = 0;
	if(!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}
/*
 * _strcmp - performs lexicographic comparison of two strings
 * @s1: the 1st string
 * @s2: the 2nd string
 * return: -ve if s1 < s2, +ve if s1 > s2, zero @ s1 == s2
 * */
int _strcmp(char *s1,char *s2){
		while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}
/**
 * starts_with - checks if needle starts with haystack
 * @haystack: string to search
 * @needle: the substring to find
 * Return: address of next char of haystack or NULL
 */
char *starts_with(const char *haystack, const char *needle){
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}
/**
 * _strcat - concatenates two strings
 * @dest: the destination buffer
 * @src: the source buffer
 * Return: pointer to destination buffer
 */
char *_strcat(char *dest, char *src){
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
