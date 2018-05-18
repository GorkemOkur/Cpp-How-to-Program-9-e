/*
 * =====================================================================================
 *
 *       Filename:  exercise_6-19.cpp
 *
 *     Description: 6.19 (Hypotenuse Calculations)
 *								  
 *
 *        Version:  1.0
 *        Created:  19/05/18 01:40:00
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

double hypotenuse(double side1,double side2){
	return sqrt(pow(side1,2)+pow(side2,2));
}

int main(){
	
	double side1=0,side2=0;

	cout<<"Enter side-1 : ";
	cin>>side1;
	cout<<"Enter side-2 : ";
	cin>>side2;

	cout<<"hypotenuse : "<<hypotenuse(side1,side2)<<endl;

return 0;
}
