/*******************************************************************************
*  Program name: area_of_circle.cpp
*  Author: ...
*  Date last updated: 09/20/2021
*  Purpose: Calculates the circle's radius, diameter, circumference, and area 
            based on the distance.
*******************************************************************************/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// takes all the variables as positional arguments from main function
float calculateRadius(float x1, float y1, float x2, float y2)
{
     // utilizes the cmath module to calculate the radius
     return sqrt((pow((x2 - x1), 2)) + (pow((y2 - y1), 2)));
     // and then returns it
}

float calculateCircumference(float radius)
{
     // the cmath module has a pre-defined variable called M_PI which is
     // the precise form of pi
     return (2 * M_PI * radius);
     // returns the Area.
}

float calculateArea(float radius)
{
     // the cmath module has a pre-defined variable called M_PI which is
     // the precise form of pi
     return (M_PI * (pow(radius, 2)));
     // returns the Area.
}
int main()
{

     // define the variables in the main() function
     float x1, x2, y1, y2;

     // single character
     char comma;

     cout << "THIS APP CALCULATES EVERYTHING ABOUT THE CIRCLE BASED ON 2 POINTS";

     // take input of the first point
     cout << "\n\nenter the 1st point separated by a comma [,]: ";
     cin >> x1 >> comma >> y1;
     cout << setw(16) << "1st Point: "
          << setw(25) << x1 << "," << y1;

     // take input of the second point
     cout << "\n\nenter the 2nd point separated by a comma [,]: ";
     cin >> x2 >> comma >> y2;
     cout << setw(16) << "2nt Point: "
          << setw(25) << x2 << "," << y2 << endl;

     // value returned from the calculateRadius gets assigned to radius
     float radius = calculateRadius(x1, y1, x2, y2);

     // formatting the output
     cout << endl
          << setw(16) << "Radius: "
          << setw(28) << fixed << setprecision(2)
          << radius << endl;

     cout << setw(16) << "Circumference: "
          << setw(28) << fixed << setprecision(2)
          << calculateCircumference(radius) << endl;

     cout << setw(16) << "Area: "
          << setw(28) << fixed << setprecision(2)
          << calculateArea(radius)
          << endl;

     // this is for my compiler. it is not necessary.
     cout << endl
          << endl;
}
