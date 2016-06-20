#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include "phone.h"

using namespace std;

int main(){

  Phone s7;
 
	s7.setScreen_size(5.1);
	s7.setWeight(152);
	s7.setName("Samsung Galaxy S7");
 
 
	s7.setAll(5.1, 152, "Samsung Galaxy S7");
 
	Phone lumia(5, 167, "Nokia Lumia 930");
 
	IPhone iphone(4.7, 143, "IPhone 6S", "Siri");
 
	cout << "Number of Phones: " << Phone::getNumOfPhones() << endl;
 

  s7.toString();
	lumia.toString();
	iphone.toString();
 
 
	return 0;
}