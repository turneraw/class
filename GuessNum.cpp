#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

int main() {

	ofstream outputFile;

	int num, guess, tries = 0;
	
	outputFile.open("GuessNum.txt");

	srand(time(0)); //seed random number generator

	num = rand() % 1000 + 1; // random number between 1 and 1000

	cout << "Guess My Number Game\n\n";

	do
	{
    	cout << "Enter a guess between 1 and 1000 : ";
    	cin >> guess;
    	tries++;

    	if (guess >= num + 1)
    	if (guess < num + 20)
        	cout << "Close! But too high!\n\n";

    	if (guess >= num + 20)
    	if (guess < num + 100)
        	cout << "Slightly too high!\n\n";

    	if (guess >= num + 100)
    	if (guess <= num + 199)
        	cout << "Just a bit too high!\n\n";

    	if (guess >= num + 199)
    	if (guess < num + 299)
        	cout << "Too high!\n\n";

    	if (guess >= num + 299)
    	if (guess < num + 399)
        	cout << "Way too high!\n\n";

    	if (guess >= num + 399)
    	if (guess <= num + 499)
        	cout << "You have a ways to go! Too high!\n\n";
  	
     	if (guess >= num + 499)
    	if (guess < num + 599)
        	cout << "Not even close! Too high!\n\n";
	
    	if (guess >= num + 599)
    	if (guess < num + 699)
        	cout << "Guess Lower! Way too high!\n\n";

    	if (guess >= num + 699)
    	if (guess < num + 799)
        	cout << "You should probably guess a lot lower!\n\n";
  	
    	if (guess >= num + 799)
    	if (guess < num + 899)
        	cout << "Maybe you should guess a lower number...\n\n";

    	if (guess >= num + 899)
    	if (guess < num + 999)
        	cout << "Worst Guess Possible!\n\n";

    	if (guess <= num - 1)
    	if (guess > num - 20)
        	cout << "Close! But too low!\n\n";

    	if (guess <= num - 20)
    	if (guess > num - 100)
        	cout << "Slightly too low!\n\n";

    	if (guess <= num - 100)
    	if (guess >= num - 199)
        	cout << "Just a bit too low!\n\n";

    	if (guess <= num - 199)
    	if (guess > num - 299)
        	cout << "Too low!\n\n";

    	if (guess <= num - 299)
    	if (guess > num - 399)
        	cout << "Way too low!\n\n";

    	if (guess <= num - 399)
    	if (guess >= num - 499)
        	cout << "You have a ways to go! Too low!\n\n";
  	
    	if (guess <= num - 499)
    	if (guess > num - 599)
        	cout << "Not even close! Too low!\n\n";

    	if (guess <= num - 599)
    	if (guess > num - 699)
        	cout << "Guess higher! Way too low!\n\n";

    	if (guess <= num - 699)
    	if (guess >= num - 799)
        	cout << "You should probably guess a lot higher!\n\n";

    	if (guess <= num - 799)
    	if (guess > num - 899)
        	cout << "Maybe you should guess a higher number...\n\n";

    	if (guess <= num - 899)
    	if (guess > num - 999)
        	cout << "Worst Guess Possible!\n\n";

    	if (guess == num)
        	
        	outputFile << "Correct! You got it in " << tries << " guesses!\n\n";

	} while (guess != num);

    	if (tries == 1)         
        	outputFile << "Perfect!\n\n";

    	if (tries >= 2)
    	if (tries <= 6)	       
        	outputFile << "Quite impressive!\n\n";
	
    	if (tries >= 7)
    	if (tries <= 11)         
        	outputFile << "Try again.\n\n";

    	if (tries > 11)
        	outputFile << "Just give up!\n\n";
	
	
// Close the file.
	outputFile.close();
	cout << "Correct! You got it in " << tries << " guesses!\n";
	cout << "The information has now been saved to a file.\n";
	cin.ignore();

	cin.get();

	return 0;
}