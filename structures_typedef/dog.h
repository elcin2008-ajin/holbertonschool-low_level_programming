#ifndef DOG_H
#define DOG_H

/**
 * struct dog - information about a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* typedef for struct dog */
typedef struct dog dog_t;

/* Prototype of new_dog function */
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
