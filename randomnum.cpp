#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;



int main()

{

	int num, guess, tries = 0;

	srand(time(0)); //seed random number generator

	num = rand() % 100 + 1; // random number between 1 and 100

	cout << "Guess My Number Game\n\n";

	do

	{

		cout << "Enter a guess between 1 and 100 : ";

		cin >> guess;

		tries++;

		if (guess >= num + 1)
		if (guess < num + 20)

			cout << "Too high!\n\n";

		if (guess >= num + 20)
		if (guess <= num + 99)

			cout << "Way too high!\n\n";

		if (guess <= num - 1)
		if (guess > num - 20)

			cout << "Too low!\n\n";

		if (guess <= num - 20)
		if (guess >= num - 99)
			
			cout << "Way too low!\n\n";

		if (guess == num)

			cout << "Correct! You got it in " << tries << " guesses!\n\n";


	} while (guess != num);



	cin.ignore();

	cin.get();

	return 0;

}