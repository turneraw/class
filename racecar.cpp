// This progam calcuates how fast a driver is going in MPH.
#include <iostream>
using namespace std;

int main() 
{
// Constant
const double MILES = 2.5;
  
//setting up variables
double mph, speed, sec;

// Get how fast a lap was finished.
cout << "How fast did the driver finish the lap in seconds? ";
cin >> sec;

// Calculate speed
speed = (sec / 60);
  
// Calculate miles.
mph = ((MILES * 60) / speed);

// Display length of lap.
cout << "The driver is going "; 
cout << mph << "mph.\n";
return 0;
}