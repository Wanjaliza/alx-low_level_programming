#ifndef STRUCTS
#define STRUCTS
/**
* struct dog - description of pet
* @name: pet name
* @age: pet age
* @owner: pet owner
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif
#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
