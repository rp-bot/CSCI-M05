/*******************************************************************************
* Program name: falling_distance.cpp
*  Author: ...
*  Date last updated: 09/20/2021
* Purpose: Calculates the distance travelled by the force of gravity
           based on the user input of time. D = 1/2gt^2
*******************************************************************************/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float GRAVITY = 9.80665; //global variable for gravity constant

float fallingDistance(float t) // defined a float function because I need
                               // a precise decimal result.
{
    if (t == 0)
    {
        return 0; // saving processing time by bruteforcing obvious answers
                  // anything multiplied by 0 = 0
    }
    else
    {
        return (0.5 * GRAVITY * pow(t, 2)); //returns the distance.
    }
}

int main() // start main
{
    float time; // this will hold the input

    // take input
    cout << "enter the time in seconds: ";
    cin >> time;
    cout << endl;

    // for loop iterates based on the value of time. it executes until
    // i is equal to time. i is incremented by 5.
    for (int i = 0; i <= time; i += 5)
    {
        cout << setw(5) << i << " s"; // output seconds

        cout << setw(22) << fixed << setprecision(2)
             << fallingDistance(i); // outputs distance

        cout << " m\n"; // outputs the unit of measurement
    }

    // after for loop is killed, the following outputs
    // the precise distance asked originally by the user.

    cout << endl; // end previous line

    cout << setw(5) << fixed << setprecision(2)
         << time << " s"; // output original time

    cout << setw(22) << fixed << setprecision(2)
         << fallingDistance(time); // output distance
    cout << " m\n";

    // this is for my compiler. so it is not necessary
    cout << endl
         << endl;
}