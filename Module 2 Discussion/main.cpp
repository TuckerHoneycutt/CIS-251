/**
Name: Tucker Honeycutt
Class: CIS 251-DW1
Date: 6/9/2025
Assignment: Module 2 Discussion Forum

Description: Scratchwork for module 2 forum short answers 1 and 2 
*/

#include <iostream>

using namespace std;

int main()
{
    auto average = 85.2;
    string grade = (average >= 90) ? "A" : (average >= 80) ? "B" : "C";
    cout << grade << endl;

    return 0;
}