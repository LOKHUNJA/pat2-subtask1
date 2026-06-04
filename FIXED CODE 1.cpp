
 
 // FIXED: Added # before include statement
#include <iostream>

// FIXED: Added iomanip library for setprecision()
#include <iomanip>

using namespace std;

// Constants
const int NUM_EXPERIMENTS = 3;
const int NUM_READINGS = 3;

// FIXED: Changed float main() to int main()
int main()
{
    // FIXED: Changed char variables to int variables
    int i, j;

    // Variables to store values
    double readingValue;
    double total;
    double average;

    // Loop through experiments
    for (i = 1; i <= NUM_EXPERIMENTS; i++)
    {
        // FIXED: Added missing semicolon
        total = 0;

        cout << "\nEXPERIMENT " << i << endl;
        cout << "====================\n";

        // Loop through readings
        for (j = 1; j <= NUM_READINGS; j++)
        {
            // FIXED: Added missing semicolon
            cout << "Enter reading " << j << " value: ";

            cin >> readingValue;

            // FIXED: Changed subtraction to addition
            total = total + readingValue;
        }

        // FIXED: Corrected average formula
        average = total / NUM_READINGS;

        // Determine range of average
        // FIXED: Corrected logical condition
        if (average < 100)
        {
            cout << "Experiment " << i << " average: "
                 << fixed << setprecision(2)
                 << average
                 << " is Below acceptable range\n";
        }

        // FIXED: Replaced OR with &&
        // FIXED: Corrected acceptable range logic
        else if (average >= 100 && average <= 300)
        {
            cout << "Experiment " << i << " average: "
                 << fixed << setprecision(2)
                 << average
                 << " is Within acceptable range\n";
        }

        // Above acceptable range
        else
        {
            cout << "Experiment " << i << " average: "
                 << fixed << setprecision(2)
                 << average
                 << " is Above acceptable range\n";
        }
    }

    return 0;
}

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
