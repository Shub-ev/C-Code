// here we will create struct object/instance at heap using pointers
// pointers are required to create objects at heap

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Student{
    int roll;
    char name[20];
};

int main(){

    // 1. create pointer to structure
    //    this will be strored at Stack
    struct Student *s_ptr;

    // 2. allocate heap momory using malloc/calloc as same size of struct
    //    and assign it to ptr
    s_ptr = (struct Student *)malloc(sizeof(struct Student));
    // this will print garbage values
    printf("Roll: %d, Name: %s\n", s_ptr->roll, s_ptr->name);

    s_ptr->roll = 101;
    strcpy(s_ptr->name, "Shubham Gharage");
    printf("Roll: %d, Name: %s\n", s_ptr->roll, s_ptr->name);

    return 0;
}