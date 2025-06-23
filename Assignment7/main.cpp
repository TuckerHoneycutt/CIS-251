/**
Name: Tucker Honeycutt
Date: 6/23/2025
Class: CIS 251
Assignment: #7
*/

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

// Constants for array dimensions
const int ROWS = 2;
const int COLS = 5;

// Function prototypes
int getTotal(int arr[][COLS]);
double getAverage(int arr[][COLS]);
int getRowTotal(int arr[][COLS], int row);
int getColumnTotal(int arr[][COLS], int col);
int getHighestInRow(int arr[][COLS], int row);
int getLowestInRow(int arr[][COLS], int row);

int main()
{
    // Declare 2D array
    int numbers[ROWS][COLS];
    
    // Open input file
    ifstream inputFile("Program7.txt");
    
    // Check if file opened successfully
    if (!inputFile)
    {
        cout << "Error: Cannot open file Program7.txt" << endl;
        return 1;
    }
    
    // Read data from file into array
    cout << "Reading data from Program7.txt..." << endl;
    for (int row = 0; row < ROWS; row++)
    {
        for (int col = 0; col < COLS; col++)
        {
            inputFile >> numbers[row][col];
        }
    }
    
    // Close the file
    inputFile.close();
    
    // Display the array contents
    cout << "\n2D Array Contents:" << endl;
    cout << "Row 0: ";
    for (int col = 0; col < COLS; col++)
    {
        cout << numbers[0][col] << " ";
    }
    cout << endl;
    
    cout << "Row 1: ";
    for (int col = 0; col < COLS; col++)
    {
        cout << numbers[1][col] << " ";
    }
    cout << endl << endl;
    
    // Call getTotal and getAverage for entire array
    cout << "Total of all elements: " << getTotal(numbers) << endl;
    cout << "Average of all elements: " << fixed << setprecision(1) 
         << getAverage(numbers) << endl << endl;
    
    // Call getRowTotal for each row
    cout << "Row Totals:" << endl;
    for (int row = 0; row < ROWS; row++)
    {
        cout << "Row " << row << " total: " << getRowTotal(numbers, row) << endl;
    }
    cout << endl;
    
    // Call getColumnTotal for each column
    cout << "Column Totals:" << endl;
    for (int col = 0; col < COLS; col++)
    {
        cout << "Column " << col << " total: " << getColumnTotal(numbers, col) << endl;
    }
    cout << endl;
    
    // Call getHighestInRow and getLowestInRow for each row
    cout << "Row Analysis:" << endl;
    for (int row = 0; row < ROWS; row++)
    {
        cout << "Row " << row << " - Highest: " << getHighestInRow(numbers, row)
             << ", Lowest: " << getLowestInRow(numbers, row) << endl;
    }
    
    return 0;
}

// Function to calculate total of all values in the array
int getTotal(int arr[][COLS])
{
    int total = 0;
    for (int row = 0; row < ROWS; row++)
    {
        for (int col = 0; col < COLS; col++)
        {
            total += arr[row][col];
        }
    }
    return total;
}

// Function to calculate average of all values in the array
double getAverage(int arr[][COLS])
{
    int total = getTotal(arr);
    return static_cast<double>(total) / (ROWS * COLS);
}

// Function to calculate total of values in specified row
int getRowTotal(int arr[][COLS], int row)
{
    int total = 0;
    for (int col = 0; col < COLS; col++)
    {
        total += arr[row][col];
    }
    return total;
}

// Function to calculate total of values in specified column
int getColumnTotal(int arr[][COLS], int col)
{
    int total = 0;
    for (int row = 0; row < ROWS; row++)
    {
        total += arr[row][col];
    }
    return total;
}

// Function to find highest value in specified row
int getHighestInRow(int arr[][COLS], int row)
{
    int highest = arr[row][0];
    for (int col = 1; col < COLS; col++)
    {
        if (arr[row][col] > highest)
        {
            highest = arr[row][col];
        }
    }
    return highest;
}

// Function to find lowest value in specified row
int getLowestInRow(int arr[][COLS], int row)
{
    int lowest = arr[row][0];
    for (int col = 1; col < COLS; col++)
    {
        if (arr[row][col] < lowest)
        {
            lowest = arr[row][col];
        }
    }
    return lowest;
}