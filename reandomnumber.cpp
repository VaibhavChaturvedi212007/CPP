#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    // Random number = we use rand() function to generate random number
    // cout<<rand();
    // return 0;

    // Create a Random Number Between 0 and 100
    srand(time(0));     // Using srand(time(0)) you will Get a different random number each time the program runs
                        // add the time() function from the <ctime> library.
    int randoma=rand() %101;
    cout<<randoma;
    return 0;
}