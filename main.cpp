#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<iomanip>
#include"class.h"
using namespace std;

int main()
{
  double height;
  double mass;
  double Height;
  double Mass;
  double bmi;
  string str;

  BMI BMI1;
  ifstream inFile("file.in",ios::in);
//ifstream open file
  if(!inFile)
{
  cerr<<"file can't be opened"<<endl;
  exit(1);
}
   ofstream outFile("file.out", ios::out);
   if(!outFile) {
   cerr << "Failed opening" << endl;
   exit(1);
 }
  while(inFile>>height>>mass&&height!=0&&mass!=0)
  {
   
    BMI1.setHeight(height);
    height=BMI1.getHeight();
    BMI1.setMass(mass);
    mass=BMI1.getMass();
    bmi=BMI1.calculate(height,mass);
    str=BMI1.category(bmi,str);
    
	outFile<<setprecision(4)<<bmi<<" "<<str<<endl;
   }
   return 0;
}

