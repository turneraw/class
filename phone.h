#ifndef PHONE_H
#define PHONE_H

using namespace std;

class Phone{
  
  private:
  double screen_size;
  double weight;
  string name;
  

  public:
  double getScreen_size(){return screen_size;}
	double getWeight(){return weight;}
	string getName(){return name;}
	void setScreen_size(double in){ screen_size = in; }
	void setWeight(double g){ weight = g; }
	void setName(string phoneName){ name = phoneName; }
	
  static int numOfPhones;
	
	static int getNumOfPhones() { return numOfPhones; }
	
	void setAll(double, double, string);
	
 
	Phone(double, double, string);
 
	~Phone();
 
	Phone();

	void toString();
};

int Phone::numOfPhones = 0;
 
void Phone::setAll(double screen_size, double weight, string name){
 
	this -> screen_size = screen_size;
	this -> weight = weight;
	this -> name = name;
	Phone::numOfPhones++;
 
}
 
Phone::Phone(double screen_size, double weight, string name) {
 
	this -> screen_size = screen_size;
	this -> weight = weight;
	this -> name = name;
 
}
 
Phone::~Phone() {
 
	cout << "The phone " << this -> name << " has been reviewed" << endl;
 
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
 
		IPhone(double, double, string, string);
	
 
		IPhone() : Phone(){};
 
		void toString();
 
};

IPhone::IPhone(double screen_size, double weight, string name, string siri) : 
Phone(screen_size, weight, name){
  
  this -> feature = siri;
}

void IPhone::toString(){
 
	cout << this -> getName() << " has a " << this -> getScreen_size() << 
		" in screen and is " << this -> getWeight() << " gs in weight and has the feature " << 
		this -> feature << endl;
 
}

#endif