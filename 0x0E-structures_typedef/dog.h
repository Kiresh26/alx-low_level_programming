#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines a new tpye dog
 * @age: age of dog, float. Age in decimal point
 * @name: name of dog, char
 * @owner: owner of dog, char
 */


typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /*DOG.H*/
