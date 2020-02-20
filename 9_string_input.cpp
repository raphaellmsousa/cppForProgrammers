/*
C++ for programers from Udacity
*/

/*
So, we now know that std::cin will not retrieve strings that have a space in them.
It will see the space as the end of the input.
We will obviously need a method to enter strings. 
*/

/*
Information on the getline command:
www.cplusplus.com/reference/string/string/getline/
*/

#include<iostream>
#include<string>
#include<stdio.h> 

using namespace std;

int main()
{
    freopen("inputGetline.txt", "r", stdin);

    string userName; 
    cout << "Tell me your nickname?: ";
    getline(std::cin, userName);
    cout << "Hello "<<userName<<"\n";
    return 0;
}