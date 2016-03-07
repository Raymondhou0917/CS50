#include <stdio.h>
#include <cs50.h>
// 1.5 gallons of water per minute.(192 ounces)
// A gallon is 128 ounces.
// A bottle fo water is 16 ounces. (1 min shower is 12 bottles of water)

/*
prompts the user for the length of his or her shower in minutes (as a positive integer) 
and then prints the equivalent number of bottles of water (as an integer) 
*/

int main (void)
{
    
    printf ("This program will show how many bottle of water you use when you take a shower! \n \n");
    int mins;
    int bottle;
    
    printf ("Please type the time you spend on taking the shower. \n");
    printf ("minutes:"); mins = GetInt()  ;
    
    bottle = mins * 12;
    
    printf ("bottles:" "%i\n" , bottle);
    
}