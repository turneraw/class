// This progam calculates the user's pay. 
#include <iostream>
#include <iomanip>
using namespace std;
 
int main() { 
// Constants 
const double State = .034;
const double SocialS = .062;
const double MediCare = .0145;
  
//setting up variables
double hours, rate, pay, statetax, netpay, social, medicare, fedtax; 
  
// Set desired output formatting for numbers.
cout << setprecision(2) << fixed << showpoint;
 
// Get the number of hours worked. 
cout << "How many hours did you work? "; 
cin >> hours; 
 
// Get the hourly pay rate. 
cout << "How much do you get paid per hour? "; 
cin >> rate; 
 
// Calculate the pay. 
pay = hours * rate; 
 
// Calculate State tax. 
statetax = (pay * State);

// Calculate Social Security
social = (pay * SocialS);
  
// Calculate Medicare
medicare = (pay * MediCare);
  
// Calculate Federal Tax
  
    if (pay >= 0)
    if (pay <= 177.40)
     fedtax = (pay * .1);
    if (pay >= 177.41)
    if (pay <= 720.14)
      fedtax = ((pay * .15) + 17.74);
    if (pay >= 720.15)
    if (pay <= 1745.19)
     fedtax = ((pay * .25) + 99.16);
    if (pay >= 1745.20)
    if (pay >= 3640.38)
     fedtax = ((pay * .28) + 355.41);
    if (pay >= 3640.39)
    if (pay <= 7913.46)
     fedtax = ((pay * .33) + 886.06);
    if (pay >= 7913.47)
    if (pay <= 7946.15)
     fedtax = ((pay * .35) + 2296.18);
    else
     fedtax = ((pay * .396) + 2307.62);
  
// Calculate net pay.
netpay = pay - (statetax + social + medicare + fedtax);
  
// Display gross pay
cout << "Your gross pay is $" << pay << endl;
  
// Display Federal Tax
cout << "Federal Tax took out this much: $" << fedtax << endl;
  
// Display State Tax
cout << "State Tax took out this much: $" << statetax << endl;
 
// Display Social Security
cout << "Social Security took out this much: $" << social << endl;
  
// Display Medicare
cout << "Medicare took out this much: $" << medicare << endl;
  
// Display the netpay. 
cout << "You're net pay is $" << netpay << endl; 
return 0; 
}