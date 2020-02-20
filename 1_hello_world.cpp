/*
C++ for programers from Udacity
*/

/*
1. Each C++ program consists of two parts: the preprocessor directives and 
the main function. Let’s look at a short program and analyze its different sections. 


2. The first line we encounter has a hash at the start of the line. 
Any line that has a hash sign at the start is a preprocessor directive.

3. The brackets say “Look for this file in the directory where all the standard libraries are stored”. 
C++ also allows us to specify the library name using double quotes. 

4. The double quotes say “look in the current directory, if the file is not there, 
then look in the directory where the standard libraries are stored”. Ex.:

#include "main.hpp"

*/

#include <iostream> //provides basic input and output services for C++ (cin, cout...) 
#include <stdio.h> //Just for printf

int main()
{
    //"cout" is the function used in C++ to print information
    std::cout << "Hello world, I am ready for C++ \n";
    std::cout << "This is a test! \n";

    //It is possible to use printf, but it is necessary include the stdio.h library
    printf("We can use \"printf\" for this task! \n");

    return 0;
}