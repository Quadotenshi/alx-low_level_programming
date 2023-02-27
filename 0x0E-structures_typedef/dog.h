#ifdef DOG_H
#define DOG_H

/**
 * dog_t - typedef for struct dog
 */

typedef struct dog dog_t;

/**
 * struct dog - structure for dogs
 * @name: first member
 * @age: seconde member
 * @owner: third member
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
