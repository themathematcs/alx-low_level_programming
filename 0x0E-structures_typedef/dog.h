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
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *scr);
int _strlen(char *s);

#endif
