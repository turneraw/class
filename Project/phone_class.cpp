#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include "phone_class.h"

using namespace std;

int main(){

  Phone s7;
 
	s7.setScreen_size(5.1);
	s7.setWeight(152);
	s7.setName("Samsung Galaxy S7");
 
	cout << s7.getName() << " has a " << s7.getScreen_size() << "in screen and is "
		<< s7.getWeight() << "gs in weight" << endl;
 
	s7.setAll(5.1, 152, "Samsung Galaxy S7");
 
	cout << s7.getName() << " has a " << s7.getScreen_size() << "in screen and is "
		<< s7.getWeight() << "gs in weight" << endl;
 
	Phone lumia(5, 167, "Nokia Lumia 930");
 
	cout << lumia.getName() << " has a " << lumia.getScreen_size() << "in screen and is "
		<< lumia.getWeight() << "gs in weight" << endl;
 
	IPhone iphone(4.7, 143, "IPhone 6S", "Siri");
 
	cout << "Number of Phones: " << Phone::getNumOfPhones() << endl;
 
	iphone.getFeature();
 
	lumia.toString();
	iphone.toString();
 
	iphone.Phone::toString();
 
	return 0;
}