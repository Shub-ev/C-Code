// function is a group of instructions which perform specific task
// functions make code "modular"

// monolithic programming -> writing whole program at one place
// modular programming -> breaking program into logical modules for simplicity & "reusability"

#include <stdio.h>

// 3 stapes while using function
// 1. Function declaration
// 2. Function definition
// 3. Function call

// we must provide the function name, its return type, and the number and type of its parameters
// function declaration tells the compiler that there is a function with
// the given name defined somewhere else in the program.
// syntax => return_type name_of_the_function (parameter_1, parameter_2);

// *** we can define function instead of declaring but we should do this before calling it ***

// this is function declaration/function prototype no parameter names & block{}
int sum(int, int); // these parameters are formal parameters


// *** only one value can be returened from functions else we have to use structures or pointers ***


int main(){
    int a = 10;
    int b = 20;

    printf("Sum : %d\n", sum(a,b)); // function call with "actual" parameters
    // this function call transfer the control to the function
    // once function is executed control is tranfered back to "main/caller function" along with
    // return data if there any 
}


// function definition
// this includes the actual code to be executed we function is called
int sum(int a, int b){  // these are formal parameters
    return a + b;
}



// i.e. total steps to use functions
// 1. function declaration
// 2. function definition
// 3. function call
// 4. execution of function
// 5. returning the value as return type


// *** there are 2 types of functions ***
// 1. library functions
// 2. user-defined functions