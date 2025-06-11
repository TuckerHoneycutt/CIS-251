/**
Name: Tucker Honeycutt
Class: CIS 251-DW1
Date: 6/10/2025
Assignment: Assignment #5

Description: This is a program that takes the input of a number of students and returns the first and last student according to the alphabetical order of students
*/

#include <iostream>
#include <string>
using namespace std;

// Function to get valid number of students
int getNumStudents() 
{
    int numStudents;
    
    cout << "Enter the number of students in the class (1-25): ";
    cin >> numStudents;
    
    while (numStudents < 1 || numStudents > 25) 
    {
        cout << "Invalid input! Please enter a number between 1 and 25." << endl;
        cout << "Enter the number of students in the class (1-25): ";
        cin >> numStudents;
    }
    
    return numStudents;
}

// Function to read student names into array
void readStudentNames(string names[], int numStudents) 
{
    cout << "\nEnter the names of the students:" << endl;
    for (int i = 0; i < numStudents; i++) 
    {
        cout << "Student " << (i + 1) << ": ";
        cin >> names[i];
    }
}

// Function to find the alphabetically first name
string findFirstStudent(string names[], int numStudents) {
    string firstStudent = names[0];
    
    for (int i = 1; i < numStudents; i++) {
        if (names[i] < firstStudent) {
            firstStudent = names[i];
        }
    }
    
    return firstStudent;
}

// Function to find the alphabetically last name
string findLastStudent(string names[], int numStudents) 
{
    string lastStudent = names[0];
    
    for (int i = 1; i < numStudents; i++) 
    {
        if (names[i] > lastStudent) 
        {
            lastStudent = names[i];
        }
    }
    
    return lastStudent;
}

// Function to display the results
void displayResults(string firstStudent, string lastStudent) 
{
    cout << "\nLine order results:" << endl;
    cout << "Student at the front of the line: " << firstStudent << endl;
    cout << "Student at the end of the line: " << lastStudent << endl;
}

int main() 
{
    string names[25];  // Array to hold up to 25 names
    
    // Get valid number of students
    int numStudents = getNumStudents();
    
    // Read all student names
    readStudentNames(names, numStudents);
    
    // Find first and last students alphabetically
    string firstStudent = findFirstStudent(names, numStudents);
    string lastStudent = findLastStudent(names, numStudents);
    
    // Display the results
    displayResults(firstStudent, lastStudent);
    
    return 0;
}