/**
Name: Tucker Honeycutt
Class: CIS 251-DW1
Date: 6/10/2025
Assignment: Assignment #4

Description: This is a geometry calculator where users calculate the area of a rectangle, triangle, or a circle
*/

// Dependencies needed for input/output and calculating time
#include <iostream>
#include <iomanip>
#include <string>

using namespace std; 

constexpr double PI = 3.14159;

double getPositiveInput(const string& prompt)
{
    double value;
    while (true)
    {
        cout << prompt;
        if (cin >> value)
        {
            if (value > 0) { return value; }
            else { cout << "Error: Please enter a positive number.\n"; }
        } 
        else 
        {
            cout << "Error: Invalid input. Please enter a valid number.\n";
            cin.clear();
            cin.ignore(1000, '\n');
        }
    } 
}

int getMenuChoice()
{
    int choice;
    while (true)
    {
        cout << "Enter your choice (1-4): ";
        if (cin >> choice)
        {
            if (choice >= 1 && choice <= 4) { return choice; }
            else { cout << "Error: Please input a number between 1-4.\n"; }
        } 
        else 
        {
            cout << "Error: Invalid input. Please enter a validnumber.\n";
            cin.clear();
            cin.ignore(1000, '\n');
        }
    }
}

void calculateCircleArea()
{
    cout << "\n--- Circle Area Calculator ---\n";
    double radius = getPositiveInput("Enter the radius of the circle: ");
    double area = PI * radius * radius;
    cout << fixed << setprecision(2);
    cout << "The area of the circle is: " << area << " square units\n\n";
}

void calculateRectangleArea()
{
    cout << "\n--- Rectangle Area Calculator ---\n";
    double length = getPositiveInput("Enter the length of the rectangle: ");
    double width = getPositiveInput("Enter the width of the rectangle: ");
    double area = length * width;
    cout << fixed << setprecision(2);
    cout << "The area of the Rectangle is: " << area << " square units\n\n";
}

void calculateTriangleArea()
{
    cout << "\n--- Triangle Area Calculator ---\n";
    double base = getPositiveInput("Enter the length of the triangle's base: ");
    double height = getPositiveInput("Enter the length of the triangle's height: ");
    double area = 0.5 * base * height;
    cout << fixed << setprecision(2);
    cout << "The area of the Triangle is: " << area << " square units\n\n";
}

void displayMenu() 
{
    cout << "Geometry Calculator\n";
    cout << "           1. Calculate the Area of a Circle\n";
    cout << "           2. Calculate the Area of a Rectangle\n";
    cout << "           3. Calculate the Area of a Triangle\n";
    cout << "           4. Quit\n";
}

int main()
{
    cout << "Welcome to the Geometry Calculator\n\n";
    while (true)
    {
        displayMenu();
        int choice = getMenuChoice();

        switch(choice)
        {
            case 1: 
                calculateCircleArea();
                break;
            case 2:
                calculateRectangleArea();
                break;
            case 3: 
                calculateTriangleArea();
                break;
            case 4:
                cout << "\nThank you for using the Geometry Calculator. Goodbye!\n";
                return 1;
                break;
            default:
                cout << "Error: Invalid choice.\n";
                break;
        }
    }
    return 0;
}