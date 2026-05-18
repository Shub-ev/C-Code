#ifndef ARRAY_ADT
#define ARRAY_ADT

#include<stdio.h>
#include<stdlib.h>

// declare an Array structure
struct Array
{
    int* array;
    int size;
    int length;
};


void create_array(struct Array*);
void increase_array(struct Array*);
void display(struct Array*);
void append(struct Array*, int);
void insert(struct Array*, int, int);
void delete(struct Array* , int);
// void search(struct Array, int);
// int get(struct Array, int);
// void set(struct Array, int, int);
// int max(struct Array);
// int min(struct Array);
// void reverse(struct Array);
// void shift(struct Array);

#endif