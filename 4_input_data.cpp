/*
C++ for programers from Udacity
*/

#include <iostream>
#include <stdio.h> //Just for printf

using namespace std;

int main()
{
    int year = 0;
    cout << "What year is your favorite? \n";
    //cin provide an input method in C++
    cin >> year;
    cout << "Your favorite year is " << year << "\n";

    //We can do it by using printf and scanf as follow:
    printf("What year is your favorite? \n");
    scanf("%d", &year);
    printf("Your favorite year is %d \n", year);
/*
As presented here:
https://www.educative.io/edpresso/how-to-read-data-using-scanf-in-c?https://www.educative.io/courses/grokking-the-object-oriented-design-interview?aid=5082902844932096&utm_source=google&utm_medium=cpc&utm_campaign=blog-dynamic&gclid=CjwKCAiA1rPyBRAREiwA1UIy8FQN1VFXIr3uDfjxLHM9u3N9_zL_wfrm5AjwdMnxj6fbQkcbEcV1GxoC21EQAvD_BwE

"The scanf() function requires the address of the variable, 
not the actual variable itself. 
This is done to store the value at the memory location of the variable."
*/
}
