/**
Name: Tucker Honeycutt
Class: CIS 251-DW1
Date: 6/10/2025
Assignment: Assignment #6

Description: This is a population growth calculator that simulates population changes over time
             based on birth and death rates. Uses formula: N = P + BP - DP
*/

#include <iostream>
#include <iomanip>

using namespace std; 

// Gets starting population from user (minimum 2)
double getStartingPopulation()
{
    double population = 0.0;
    cout << "Enter the starting population size (minimum 2): ";
    cin >> population;
    
    // Validate input
    while (population < 2)
    {
        cout << "Error: Starting population must be at least 2." << endl;
        cout << "Enter the starting population size (minimum 2): ";
        cin >> population;
    }
    return population;
}

// Gets birth rate from user (non-negative)
double getBirthRate()
{
    double bRate = -1;
    cout << "Enter the annual birth rate: ";
    cin >> bRate;
    
    // Validate input
    while (bRate < 0)
    {
        cout << "Error: Birth rate cannot be negative." << endl;
        cout << "Enter the annual birth rate: ";
        cin >> bRate;
    }
    return bRate;
}

// Gets death rate from user (non-negative)
double getDeathRate()
{
    double dRate = -1;
    cout << "Enter the annual death rate: "; 
    cin >> dRate;

    // Validate input
    while (dRate < 0)
    {
        cout << "Error: Death Rate cannot be negative." << endl;
        cout << "Enter the annual death rate: ";
        cin >> dRate;
    }
    return dRate;
}

// Gets number of years from user (minimum 1)
int getNumberOfYears()
{
    int years = 0;
    cout << "Enter the number of years to display (minimum 1): ";
    cin >> years;

    // Validate input
    while (years < 1)
    {
        cout << "Error: Number of years must be at least 1." << endl;
        cout << "Enter the number of years to display (minimum 1): ";
        cin >> years;
    }
    return years;
}

// Calculates new population using formula: N = P + BP - DP
double calculatePopulation(double currentPopulation, double birthRate, double deathRate)
{
    return currentPopulation + (birthRate * currentPopulation) - (deathRate * currentPopulation);
}

// Prints a character a specified number of times
void printChar(char ch, int count)
{
    for (int i = 0; i < count; i += 1) 
    {
        cout << ch;
    }
    cout << endl;
}

// Displays population growth results for each year
void displayPopulationGrowth(double startingPopulation, double birthRate, double deathRate, int years)
{
    cout << "\nPopulation Growth Over Time:" << endl;
    printChar('=', 27);
    cout << fixed << setprecision(2);

    // Show starting population
    cout << "Year 0: " << startingPopulation << endl;
    double currentPop = startingPopulation;

    // Calculate and display each year
    for (int year = 1; year <= years; year += 1)
    {
        currentPop = calculatePopulation(currentPop, birthRate, deathRate);
        cout << "Year " << year << ": " << currentPop << endl;
    }
}

// Displays program header
void displayHeader()
{
    cout << "Population Growth Calculator" << endl;
    printChar('=', 27);
    cout << endl;
}

int main() 
{
    // Display header
    displayHeader();

    // Get user input
    double startingPopulation = getStartingPopulation();
    double birthRate = getBirthRate();
    double deathRate = getDeathRate();
    int years = getNumberOfYears();
    
    // Display results
    displayPopulationGrowth(startingPopulation, birthRate, deathRate, years);

    return 0;
}