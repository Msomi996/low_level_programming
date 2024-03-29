#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: evaluate the string
 *
 * Return: length of the string will be returned
 */
int _strlen(char *s)
{
	int j;

	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	return (j);
}

/**
 * *_strcpy - duplicate the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we duplicate the string
 * @src: string to be duplicated
 *
 * Return: the pointer to test
 */
char *_strcpy(char *dest, char *src)
{
	int len, r;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (r = 0; r < len; r++)
	{
		dest[r] = src[r];
	}
	dest[r] = '\0';

	return (dest);
}

/**
 * new_dog - initialise a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
