// This program stores, in an array, the hours worked by
// employees who all make the same hourly wage.
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
 
int main()
{
  ofstream outputFile;
  int payrate, grossPay;
   const int NUM_EMPLOYEES = 5;   
   int hours[NUM_EMPLOYEES];                 
  
  // Open an output file.
  outputFile.open("Hack7.txt");
  
   // Input the hours worked.
   cout << "Enter the hours worked by ";
   cout << NUM_EMPLOYEES << " employees who all\n";
   cout << "earn the same hourly rate.\n";
   for (int index = 0; index < NUM_EMPLOYEES; index++)
   {
      cout << "Employee #" << (index + 1) << ": ";
      cin >> hours[index];
   }
 
   // Input the hourly rate for all employees.
   cout << "Enter the hourly pay rate for all the employees: ";
   cin >> payrate;
 
   // Display each employee's gross pay.
   outputFile << "Here is the gross pay for each employee:\n";
   outputFile << fixed << showpoint << setprecision(2);
   for (int index = 0; index < NUM_EMPLOYEES; index++)
   {
      grossPay = hours[index] * payrate;
      outputFile << "Employee #" << (index + 1);
      outputFile << ": $" << grossPay << endl;
   }
  
  // Close the file.
  outputFile.close();
  cout << "Done.\n";
  return 0;
}