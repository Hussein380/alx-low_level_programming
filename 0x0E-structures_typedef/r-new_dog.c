#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dofg
 * @name: name of new dog
 * @owner: owner of the dog
 * @age: age of the dog
 * Return: ndog;
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int len1 = 0;
	int len2 = 0;
	int i;
	dog_t *ndog;
	
	/*calculate legnth for name and owner string;*/
	for (i = 0; name[i] != '\0'; i++)
		len1++;
	for (i = 0; owner[i] != '\0'; i++)
		len2++;

	/*allocate memory for ndog*/
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (ndog);

	/*allocate memory for name and copy */
	ndog->name = malloc(len1 + 1);
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		ndog->name[i] = name[i];

	/*allocate memory for owner and copy*/
	ndog->owner = malloc(len2 +1);
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	for (i = 0; owner[i] != '\0'; i++)
		ndog->owner[i] = owner[i];
	/*set the age field*/
	ndog->age = age;
	return (ndog);
}
