#include <iostream>
#include <string>
#include <fstream>
using namespace std;
 
int main ()
{
ofstream outputFile;
   // local variable declaration:
   char grade;
 
// Open an output file.
  outputFile.open("switch.txt");
    
  cout << "What is the grade: ";
  cin >> grade;
  
   switch(grade)
   {
   case 'A' :
   case 'a' :
      outputFile << "Excellent!" << endl;
      break;
   case 'B' :
   case 'b' :
   case 'C' :
   case 'c' :
      outputFile << "Well done" << endl;
      break;
   case 'D' :
   case 'd' :
      outputFile << "You passed" << endl;
      break;
   case 'F' :
   case 'f' :
      outputFile << "Better try again" << endl;
      break;
   default :
      outputFile << "Invalid grade" << endl;
   }
   outputFile << "Your grade is " << grade << endl;
  cout << "The information has been saved to a file.\n";
    
  // Close the file.
  outputFile.close();
  cout << "Done.\n";
   return 0;
}