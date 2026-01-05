#ifndef DOG_H
#define DOG_H

/**
 * struct dog - it haqqında məlumat saxlayan struktur
 * @name: itin adı
 * @age: itin yaşı
 * @owner: itin sahibi
 */
typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;

/* Funksiya prototipləri */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
