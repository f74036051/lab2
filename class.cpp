#include<iostream>
#include<string>
#include<cmath>
#include"class.h"
using namespace std;

		
         	void BMI::setHeight(double height)
		{
		      Height=height/100.0;	
		}
		
		double BMI::getHeight()
		{
			return Height;
		}
		
		void BMI::setMass(double mass)
		{
			Mass=mass;
		}
		
		double BMI::getMass()
		{
			 return Mass;
		}

        double BMI::calculate(double height, double mass)
		{
		    	
                    bmi=Mass/pow(Height,2);
		    return bmi;
       }
        
		string BMI::category(double bmi,string str)
		{
          	
		  if(bmi<15)
           {
             str="Very severely underweight\n";
           }

         else if(bmi>=15.0&&bmi<16.0)
		{
            str="Severely underweightt\n";
          }
    
         else  if(bmi>=16.0&&bmi<18.5){
          str="Underweight\n";
          }
   
          else if(bmi>=18.5&&bmi<25){
           str="Normal\n";
         }
   
          else if(bmi>=25&&bmi<30){
          str="Overweight\n";
          }
   
          else if(bmi>=30&&bmi<35){
         	str="Obese class I(Moderately Obese)\n";
            }
    
          else if(bmi>=35&&bmi<40){
   	       str="Obese class II(Severely obese)\n";
           }
    
          else if(bmi>=40){
   	      str="Obese class III(Very severely obese\n";
          }
          
          return str;
        }
	
