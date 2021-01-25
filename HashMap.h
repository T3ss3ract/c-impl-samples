//
// Created by Vayentha on 1/25/21.
//

#ifndef DRUMMY32_HASHMAP_H
#define DRUMMY32_HASHMAP_H

#define MAP_MISSING -3 /* no element found */
#define MAP_FULL -2     /* hashmap is full */
#define MAP_OMEM -1     /* Out of Mem */
#define MAP_OK 0

typedef void* any_t;

/**
 * pointer to function that takes two any_t args and returns an integer
 */
typedef int (*PFany) (any_t, any_t);

/**
 * pointer to internally maintained data structure
 */
typedef any_t map_t;

/**
 * return an empty hashmap. return null if empty
 * @return
 */
extern map_t hashmap_new();

extern int hashmap_iterate(map_t in, PFany f, any_t item);

extern int hashmap_put(map_t in, int key, any_t value);

/*
 * Get an element from the hashmap. Return MAP_OK or MAP_MISSING.
 */
extern int hashmap_get(map_t in, int key, any_t *arg);

/*
 * Remove an element from the hashmap. Return MAP_OK or MAP_MISSING.
 */
extern int hashmap_remove(map_t in, int key);

/*
 * Get any element. Return MAP_OK or MAP_MISSING.
 * remove - should the element be removed from the hashmap
 */
extern int hashmap_get_one(map_t in, any_t *arg, int remove);

/*
 * Free the hashmap
 */
extern void hashmap_free(map_t in);

/*
 * Get the current size of a hashmap
 */
extern int hashmap_length(map_t in);



#endif //DRUMMY32_HASHMAP_H
