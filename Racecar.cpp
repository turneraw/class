// This progam calcuates how long a lap is at the race course.
#include <iostream>
using namespace std;

int main() 
{
//setting up variables
double mph, speed, miles, sec;

// Get how fast the driver is going.
cout << "How fast is the driver going? ";
cin >> mph;

// Get how fast a lap was finished.
cout << "How fast did the driver finish the lap in seconds? ";
cin >> sec;

// Calculate speed
speed = (sec / 60);
  
// Calculate miles.
miles = ((mph * speed) / 60);

// Display length of lap.
cout << "1 lap is "; 
cout << miles << " miles. \n";
return 0;
}