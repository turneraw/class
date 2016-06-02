// Specification file for the Die class
#ifndef PHONE_H
#define PHONE_H

using namespace std;

class Phone{
  
  private:
  int screen_size;
  int weight;
  string name;
  static int numOfPhones;
  
  public:
  int getScreen_size(){return screen_size;}
	int getWeight(){return weight;}
	string getName(){return name;}
	void setScreen_size(int in){ screen_size = in; }
	void setWeight(int g){ weight = g; }
	void setName(string phoneName){ name = phoneName; }
  
	void setAll(int, int, string);
 
	Phone(int, int, string);
 
	~Phone();
 
	Phone();

	static int getNumOfPhones() { return numOfPhones; }
 
	void toString();
};

int Phone::numOfPhones = 0;
 
void Phone::setAll(int screen_size, int weight, string name){
 
	this -> screen_size = screen_size;
	this -> weight = weight;
	this -> name = name;
	Phone::numOfPhones++;
 
}
 
Phone::Phone(int screen_size, int weight, string name) {
 
	this -> screen_size = screen_size;
	this -> weight = weight;
	this -> name = name;
 
}
 
Phone::~Phone() {
 
	cout << "Phone " << this -> name << " destroyed" << endl;
 
}
 
Phone::Phone() {
	numOfPhones++;
}
 
void Phone::toString(){
 
	cout << this -> name << " has a " << this -> screen_size << " in screen and is "
		<< this -> weight << " gs in weight" << endl;
 
}
 
class IPhone : public Phone{
 
	private:
		string feature = "Siri";
	public:
		void getFeature() { cout << feature << endl; }
 
		IPhone(int, int, string, string);
 
		IPhone() : Phone(){};
 
		void toString();
 
};

IPhone::IPhone(int screen_size, int weight, string name, string siri) : 
Phone(screen_size, weight, name){
  
  this -> feature = siri;
}

void IPhone::toString(){
 
	cout << this -> getName() << " has a " << this -> getScreen_size() << 
		" in screen and is " << this -> getWeight() << " gs in weight and has the feature " << 
		this -> feature << endl;
 
}

#endif