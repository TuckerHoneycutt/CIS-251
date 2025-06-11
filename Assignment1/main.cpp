/** 
Name: Tucker Honeycutt
Class: CIS 251-DW1
Date: 6/9/2025
Assignment: Assignment #1
*/

// Library imports, in this case only iostream for input/output
#include <iostream> 
// Namespace for std so we don't have to std:: for every standard library function 
using namespace std; 

int main() 
{
    // Define variables as doubles to account for decimal points and higher precision than floats
    double hours, rate, pay; 
    cout << "How many hours did you work? ";
    // Take user inputs for hour
    cin >> hours;
    cout << "How much do you get paid per hour? ";
    // Take user input for pay
    cin >> pay;
    // Calculate pay as hours * pay
    pay = hours * pay;
    cout << "You have earned $ " << pay << endl;
    return 0;
}