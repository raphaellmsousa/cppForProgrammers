/*
C++ for programers from Udacity
*/

#include <iostream>
#include <string>
#include<stdio.h> 

using namespace std;

int main()
{

    freopen("input.txt", "r", stdin);

    int year = 0;
    int age = 0;
    string name = " ";
    //print a message to the user
    //cout<<"What year is your favorite? ";
    printf("What year is your favorite? ");
        
    //get the user response and assign it to the variable year
    //cin >> year;
    scanf("%d", &year);
    
    //output response to user
    //cout << "How interesting, your favorite year is " << year << "!\n";
    printf("How interesting, your favorite year is %d !\n", year);
    
    //print a message to the user
    //cout << "At what age did you learn to ride a bike? ";
    printf("At what age did you learn to ride a bike? ");
    
    //get the user response and assign it to the variable age
    //cin >> age;
    scanf("%d", &age);

    return 0;
}