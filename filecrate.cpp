// This program is used by General Crates, Inc. to calculate the volume, cost, customer charge, and profit of a crate of any size . It calculates this data from user input, which consists of the dimensions of the crate.
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main () 
{
ofstream outputFile;
int length, width, height, volume, cost, charge, profit;
  
// Constants for cost and amount charged
const double COST_PER_CUBIC_FOOT = 0.23;
const double CHARGE_PER_CUBIC_FOOT = 0.5;

// Set the desired output formatting for numbers.
cout << setprecision(2) << fixed << showpoint;
  
// Open an output file. 
outputFile.open("Crate.txt");

// Prompt the user for the crate's length, width, and height
cout << "Enter the dimensions of the crate (in feet):\n";
cout << "Lenght: ";
cin >> length;
cout << "Width: ";
cin >> width;
cout << "Height: ";
cin >> height;

// Calculate the crate's volume, the cost to produce it, the charge to the customer, and the profit.
volume = length * width * height;
cost = volume * COST_PER_CUBIC_FOOT;
charge = volume * CHARGE_PER_CUBIC_FOOT;
profit = charge - cost;

 
outputFile << "The volume of the crate is ";
outputFile << volume << " cubic feet. \n";
outputFile << "Cost to build: $" << cost << endl;
outputFile << "Charge to customer: $" << charge << endl;
outputFile << "Profit: $" << profit << endl;
cout << "The information has been saved to a file.\n";
  
// Close the file.
outputFile.close();
cout << "Done.\n";
return 0;
}