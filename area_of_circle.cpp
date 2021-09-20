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

float calculateRadius(float x1 = 0, float y1 = 0, float x2 = 0, float y2 = 0)
{
    if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0)
    {
        return 0;
    }
    else
    {
        return sqrt((pow((x2 - x1), 2)) + (pow((y2 - y1), 2)));
    }
}

float calculateArea(float radius)
{
    return (M_PI * (pow(radius, 2)));
}

float calculateCircumference(float radius)
{
    return (2 * M_PI * radius);
}

int main()
{
    float x1, x2, y1, y2;
    char comma;

    cout << "THIS APP CALCULATES EVERYTHING ABOUT THE CIRCLE BASED ON 2 POINTS";
    cout << "\nenter the 1st point seperated by a [comma]: ";
    cin >> x1 >> comma >> y1;
    cout << "1st Point: " << x1 << "," << y1;
    cout << "\n\nenter the 2nd point: ";
    cin >> x2 >> comma >> y2;
    cout << "2nt Point: " << x2 << "," << y2 << endl;
    float radius = calculateRadius(x1, y1, x2, y2);
    cout << "\nRadius: " << fixed << setprecision(2) << radius << endl;
    cout << "Area: " << fixed << setprecision(2) << calculateArea(radius)
         << endl;
    cout << "Cirucumference: " << fixed << setprecision(2)
         << calculateCircumference(radius) << endl;
}