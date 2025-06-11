/**
Name: Tucker Honeycutt
Class: CIS 251-DW1
Date: 6/9/2025
Assignment: Assignment #2

Description: This program takes 5 known item prices and returns the subtotal, the sales tax, and the total
*/

// Dependencies
#include <iostream>

// Namespace for std 
using namespace std; 

int main() 
{
    // Define 8 variables to hold data. 5 for items and 2 for salestax, subtotal, and total
    double item1 = 15.95, item2 = 24.95, item3 = 6.95, item4 = 12.95, item5 = 3.95, subtotal = 0, salesTax = 0, total = 0;
    // Display each items price
    cout << "The items' prices: " << endl;
    for (double item : {item1, item2, item3, item4, item5}) 
    {
        cout << item << endl;
    }
    // Calculate subtotal
    subtotal = item1 + item2 + item3 + item4 + item5;
    cout << "The subtotal for all items is: " << subtotal << endl;
    // Calculate salesTax at 7%
    salesTax = subtotal * 0.07;
    cout << "The salesTax for the items is: " << salesTax << endl;
    // calculate total
    total = subtotal + salesTax;
    cout << "The total is: " << total << endl;

    return 0;
}