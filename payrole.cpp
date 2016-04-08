// This progam calculates the user's pay. 
#include <iostream>
using namespace std;
 
int main() { 
// Constants 
const double State = .034;
const double SocialS = .062;
const double MediCare = .0145;
  
//setting up variables
double hours, rate, pay, statetax, netpay, social, medicare; 
 
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
  
// Calculate net pay.
netpay = pay - (statetax + social + medicare);
  
// Display gross pay
cout << "Your gross pay is " << pay << endl;
  
// Display the netpay. 
cout << "You're net pay is " << netpay << endl; 
return 0; 
}