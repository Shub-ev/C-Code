// struct is user defined datatype which is used to group data of different types
// it acts as pack
// all datamembers are public by default

// 2 steps to use structure
// 1. structure declaration

#include <stdio.h>
#include <string.h>
#pragma pack(1) // used for struct packing

// syntax for struct => struct struct_name { member1; member2; };  // last semicolon is important
// this is called as structure template, structure prototype, structure definition
struct Student{
    int roll;
    // int roll = 10;   // we cannot initialize struct members as struct definition dosen't take
                        // memory space so where to save data?
    char fname[20];
    char lname[20];
} s1, s2;   // we can create structure variables here and there are global by default



// function accepting 2 parameters 
// 1. pass by value (a copy of struct is passed)
// 2. pass by ref using pointer

struct Num{
    int num;
};
void increment(struct Num n1, struct Num* n2){
    n1.num++;
    n2->num++;
}



int main(){
    struct Student s3; // we can declare local struct variables

    // by default all members of uninitialized struct variable are garbage
    // we can access struct members using dot(.) operator
    printf("Student %s %s have rollno %d\n", s1.fname, s1.lname, s1.roll);

    // In the case where we have a pointer to the structure,
    // we can also use the arrow operator to access the members.

    struct Student *s_ptr = &s3;
    s3.roll = 13;
    strcpy(s3.fname, "Akshu");
    strcpy(s3.lname, "Mali");

    printf("Student %s %s have rollno %d\n", s3.fname, s3.lname, s3.roll);
    // using pointer
    printf("Student %s %s have rollno %d\n", (*s_ptr).fname, (*s_ptr).lname, (*s_ptr).roll);
    // to overcome above lengthy code we use "arrow operator"
    printf("Student %s %s have rollno %d\n", s_ptr->fname, s_ptr->lname, s_ptr->roll);


    // ***** initializing struct members *****

    // 1. default intialization 
    struct Student s4 = {0};    // all memebers will be initialized to 0 or null;
    printf("Student %s %s have rollno %d\n", s4.fname, s4.lname, s4.roll);

    // 2. assignment operator (as did earlier)
    // 3. initializer list 
    struct Student s5 = {201, "Shubham", "Gharage"}; // list should be in same sequence as struct members
    printf("Student %s %s have rollno %d\n", s5.fname, s5.lname, s5.roll);

    // 4. designated initializer list (only for C not for C++)
    struct Student s6 = {.fname = "Harish", .roll = 123, .lname = "Patil"};
    printf("Student %s %s have rollno %d\n", s6.fname, s6.lname, s6.roll);
    


    // ***** copy structure *****
    s6 = s5; // s5 is copied into s6 this is "shallow copy"
    // i.e. for any heap memory pointer is copied to s6 which points to same mem as s5
    // to make "deep copy" we have to do it manually


    // ***** passing struct to function *****
    struct Num n1 = {10};
    struct Num n2 = {10};
    struct Num* n3 = &n2;
    increment(n1, n3);
    printf("%d %d\n", n1.num, n3->num);


    // ***** size of struct *****
    struct IntChar{
        int x;
        char c;
    };
    struct IntChar ic;
    printf("%d\n", sizeof(ic)); // this should be 5(4 + 1) but it prints 8 // because of structure "padding"
    // Structure padding is the concept of adding multiple empty bytes in the structure 
    // to naturally align the data members in the memory. 
    // It is done to minimize the CPU read cycles to retrieve different data members in the structure.



    // ***** nested structures *****

    // approach 1
    struct Outer{
        int temp1;
        char temp2;
        
        struct Inner{
            int inner_temp1;
            char inner_temp2;
        } inner;    // to create instance of inner is important here
    };
    struct Outer o;
    o.temp1 = 10;
    o.temp2 = 'A';
    o.inner.inner_temp1 = 20;
    o.inner.inner_temp2 = 'B';

    // approach 2
    struct Child{
        int x;
    };
    struct Parent{
        char ch;
        struct Child c;
    };
    struct Parent p;
    p.ch = 10;
    p.c.x = 20;



    // ***** self-referential struct *****
    // as this struct have a member as pointing to itself(struct) hence it is self-referential
    struct Node{
        int data;
        struct Node* next; 
    };



    // ***** Bit-fields *****
    // Bit Fields are used to specify the length of the structure members in bits. 
    // When we know the maximum length of the member, we can use bit fields to specify the size 
    // and reduce memory consumption.
    struct Flags{
        unsigned int flag1 : 1; // 1 bit
        unsigned int flag2 : 1; // 1 bit
        unsigned int flag3 : 1; // 1 bit

        unsigned int reserved : 5; // 5 bit
    };
    //  __attribute__((packed));      // not working! used for struct packing

    struct Flags fs = {1,1,0};
    printf("Size of Flags struct: %d\n", sizeof(fs));

    return 0;
}