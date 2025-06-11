/**
Name: Tucker Honeycutt
Class: CIS 251-DW1
Date: 6/9/2025
Assignment: Assignment #3

Description: This is an interest earned program that generates a report of interest earned of a given time frame
*/

// Dependencies needed for input/output and calculating time

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std; 

// Helper function to get input data from user
void getInputData(double& principal, double& rate, int& timesCompounded)
{
    cout << "Enter the principal amount: $";
    cin >> principal;
    cout << "Enter the annual interest rate (as a percentage): ";
    cin >> rate;
    cout << "Enter the number of times interest is compounded per year: ";
    cin >> timesCompounded;
}

// Helper function to calculate compound interest
double calculateCompoundAmount(double principal, double rate, int timesCompounded)
{
    double decimalRate = rate / 100;
    return principal * pow(1 + (decimalRate / timesCompounded), timesCompounded);
}

// Helper function to calculate interest
double calculateInterest(double amount, double principal) { return amount - principal; }

// Helper function to display the report output
void displayReport(double principal, double rate, int timesCompounded, double interest, double amount)
{
    cout << fixed << setprecision(2);
    cout << "\n--- COMPOUND INTEREST REPORT ---" << endl;
    cout << "Interest Rate:         " << rate << "%" << endl;
    cout << "Times Compounded:      " << timesCompounded << endl;
    cout << "Principal:             $" << principal << endl;
    cout << "Interest:              $" << interest << endl;
    cout << "Amount in Savings:     $" << amount << endl;
}

int main()
{
    double principal, rate, amount, interest;
    int timesCompounded;

    getInputData(principal, rate, timesCompounded);
    amount = calculateCompoundAmount(principal, rate, timesCompounded);
    interest = calculateInterest(amount, principal);
    displayReport(principal, rate, timesCompounded, interest, amount);
    return 0;
}