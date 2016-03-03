#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()

{

	// here is the datastring length=1&width=2&height=3

	string str = "";

	cin >> str;

	string str1 = str.substr(7,1);

	string str2 = str.substr (15,1);
      
        string str3 = str.substr (24,1);

	
	int Number1, Number2, Number3, Number4, Number5, Number6, Number7;

	stringstream(str1) >> Number1;

	stringstream(str2) >> Number2;

	stringstream(str3) >> Number3;

	Number4 = Number1 * Number2 * Number3;
	
	Number5 = Number4 * 0.23;
	
	Number6 = Number4 * 0.5;
	
	Number7 = Number6 - Number5;


	cout << "Content-type: text/html" << endl << endl;

        cout << "<html><head><title>customer order</title></head><body>" << endl;
        
        cout << "Data received: "  << str << endl << "<br>";
	
	cout << "Length: "  << Number1 << endl << "<br>";

	cout << "Width: "  << Number2 << endl << "<br>";

	cout << "Height: "  << Number3 << endl << "<br>";
	
	cout << "Cost: $" << Number5 << endl << "<br>";
	
	cout << "Charge: $" << Number6 << endl << "<br>";

	cout << "Profit: $" <<  Number7 << endl << "<br>";

	cout << "</body></html>" << endl;

	return 0;

}