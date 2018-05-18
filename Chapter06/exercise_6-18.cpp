/*
 * =====================================================================================
 *
 *       Filename:  exercise_6-18.cpp
 *
 *     Description: 6.18 (Exponentiation)
 *								  
 *
 *        Version:  1.0
 *        Created:  18/05/18 23:00:00
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

int integerPower(int base,int exponent){
	int temp=base;
	for (int i = 1; i < exponent; ++i)
	{
		base*=temp;
	}

	return base;
}

int main(){
	
	int base=0,exponent=0;

	cout<<"Enter base number : ";
	cin>>base;
	cout<<"Enter a exponent number : ";
	cin>>exponent;

	cout<<"Number : "<<integerPower(base,exponent)<<endl;

return 0;
}
