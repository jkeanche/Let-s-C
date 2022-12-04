#include <stdio.h>

/**
 * C program to read and display user input
 * Inbuilt function for use: scanf()
 * NOTE : pass & before vaiable name for scanf (it simply provides the address)
 *  (%d -> integer , %f ->float, %c ->character , %s -> string etc)
*/
int main()
{
    int x, y, z;
    float b;

    printf("Enter an integer: ");
    scanf("%d", &x);  //reading a single integer value from the keyboard
     // WE CAN READ MULTIPLE values from user input
    // user needs to separate the values using ENTER Key or space(prefered)
    printf("Enter two integer values: ");
    scanf("%x%d", &y, &z);

    printf("You entered %d , %d and %d", x, y,z);  
    return 0;
}
