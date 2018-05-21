/*
 * =====================================================================================
 *
 *       Filename:  exercise_6-50.cpp
 *
 *     Description: 6.50 (Pass-by-Value vs. Pass-by-Reference)
 *								  
 *
 *        Version:  1.0
 *        Created:  22/05/18 00:04:00
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

double tripleByValue(double n){
	n*=3;
	return n;
}

double tripleByReference(double& n){
	n*=3;
	return n;
}

int main(){

double count=0;
cout<<"Enter a Number: ";
cin>>count;

cout<<"tripleByValue returned : "<<tripleByValue(count)<<endl;
cout<<"Number after calling tripleByValue function : "<<count<<endl<<endl;

cout<<"tripleByReference returned : "<<tripleByReference(count)<<endl;
cout<<"Number after calling tripleByReference function : "<<count<<endl;

return 0;
}