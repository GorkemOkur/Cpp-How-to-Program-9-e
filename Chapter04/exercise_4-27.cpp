/*
 * =====================================================================================
 *
 *       Filename:  exercise_4-27.cpp
 *
 *     Description: 4.27 (Printing the Decimal Equivalent of a Binary Number)
 *								  
 *
 *        Version:  1.0
 *        Created:  13/05/18 00:40:00
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Şükrü Görkem Okur - gorkemokur@gmail.com
 *  	 Organization:  -
 *
 *   All the evolution we know of proceeds from the vague to the definite.
 *   —Charles Sanders Peirce
 * =====================================================================================
 */

#include<iostream>
using namespace std;


int main(){
	int num=0,temp=0,dec=0;

	cout<<"Enter a binary number : ";
	cin>>num;

	temp=num;
	for (int i=1; num ; i*=2){
		dec+=(num%10) * i;
		num/=10;
	}

	cout<<"The decimal equiv-alent of binary: "<<dec;

return 0;
}