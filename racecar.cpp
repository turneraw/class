// This progam calcuates how fast a driver is going in MPH.
#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
  ofstream outputFile;
// Constant
const double MILES = 2.5;
  
//setting up variables
double mph, speed, sec;
  
// Open an output file.
outputFile.open("racecar.txt");

// Get how fast a lap was finished.
cout << "How fast did the driver finish the lap in seconds? ";
cin >> sec;

// Calculate speed
speed = (sec / 60);
  
// Calculate miles.
mph = ((MILES * 60) / speed);

// Display length of lap.
outputFile << "The driver is going "; 
outputFile << mph << "mph.\n";
  
// Close the file.
outputFile.close();
cout << "The information has been saved to a file.\n";
return 0;
}