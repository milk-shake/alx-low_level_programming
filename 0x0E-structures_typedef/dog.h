#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef for struct dog
 * free - function tht frees dog
 */
typedef struct dog dog_t;

int _putchar(char);

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free(dog_t *d)
#endif
