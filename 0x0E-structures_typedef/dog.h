#ifndef DOG_H
#define DOG_H

/**
 * struct dog - our dogs info
 * @name: name
 * @age: age
 * @owner: owners name
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - def struct
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
