/*
 * =====================================================================================
 *
 *       Filename:  exercise_6-14.cpp
 *
 *     Description: 6.14 (Rounding Numbers)
 *								  
 *
 *        Version:  1.0
 *        Created:  17/05/18 09:00:00
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Şükrü Görkem Okur - gorkemokur@gmail.com
 *  	 Organization:  -
 *
 *   Answer me in one word.
 *   —William Shakespeare
 * =====================================================================================
 */

#include<iostream>
#include<cmath>
using namespace std;

double roundToInteger(double number){return floor(number*10 + 0.5)/10;}
double roundToTenths(double number){return floor(number*100 + 0.5)/100;}
double roundToHundredths(double number){return floor(number*1000 + 0.5)/1000;}
double roundToThousandths(double number){return floor(number*10000 + 0.5)/10000;}

int main(){
	
	double number=0;

	cout<<"Enter a number : ";
	cin>>number;

	cout<<" The Number : "<<number<<endl;
	cout<<" the number rounded to the nearest integer : "<<roundToInteger(number)<<endl;
	cout<<" the number rounded to the nearest tenth : "<<roundToTenths(number)<<endl;
	cout<<" the number rounded to the nearest hundredth : "<<roundToHundredths(number)<<endl;
	cout<<" the number rounded to the nearest thousandth : "<<roundToThousandths(number)<<endl;

return 0;
}
