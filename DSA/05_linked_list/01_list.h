#ifndef LIST_H
#define LIST_H

// Each node consists of 2 fields
// 1. Data field (which will hold the data accoding to the type of linkedlist)
// 2. Address field (which holds address of next/previous node)
struct Node
{
    int info;
    struct Node* next;
}; // semicolon is important
// This is a *** self-referential *** structure (it contains a pointer to the same type of structure).


// Declare head globally (extern makes it accessible across files)
extern struct Node* head; // (this head is not from this file)


// all methods declarations
void insert_node();
void delete_node();
void traverse_iterative();
void traverse_recursive();

#endif