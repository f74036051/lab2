#include<iostream>
#include<string>
using namespace std;

class BMI
{
	public:
		
		void setHeight(double height);
		
		double getHeight();
		
		void setMass(double mass);
		
		double getMass();
		
        double calculate(double height, double mass);
        
        string category(double bmi,string str);
        
	
	private:
		
		
	
                double Height;
                double Mass;
                double bmi;
		string str;
};

