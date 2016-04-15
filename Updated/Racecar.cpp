// This progam calcuates how long a lap is at the race course.
#include <iostream>
using namespace std;

int main() 
{
//setting up variables
double mph, speed, miles, sec;

// Get how fast the driver is going.
cout << "How long is a lap? ";
cin >> miles;

// Get how fast a lap was finished.
cout << "How fast did the driver finish the lap in seconds? ";
cin >> sec;

// Calculate speed
speed = (sec / 60);
  
// Calculate miles.
mph = ((miles * 60) / speed);

// Display length of lap.
cout << "The driver is going "; 
cout << mph << "mph.\n";
return 0;
}