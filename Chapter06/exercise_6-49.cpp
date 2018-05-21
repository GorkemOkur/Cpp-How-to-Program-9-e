/*
 * =====================================================================================
 *
 *       Filename:  exercise_6-49.cpp
 *
 *     Description: 6.49 (Circle Area)
 *								  
 *
 *        Version:  1.0
 *        Created:  22/05/18 00:00:00
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
using namespace std;

inline void circleArea(double r){
	cout<<"The area of the circle : "<<r*r*3.14;
}

int main(){

double r=0;
cout<<"Enter r: ";
cin>>r;
circleArea(r);

return 0;
}