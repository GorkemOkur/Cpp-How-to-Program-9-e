/*
 * =====================================================================================
 *
 *       Filename:  exercise_4-19.cpp
 *
 *     Description: 4.19 (Find the Two Largest Numbers)
 *								  
 *
 *        Version:  1.0
 *        Created:  12/05/18 12:00:00
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
	int counter=0;
	double number=0, largest=0,largest2=0;

	while(counter < 10){
		cout<<"Enter a number: ";
		cin>>number;


		if(number > largest){
			largest2 = largest;
			largest=number;
		}

		++counter;
	}

	cout<<"The largest number found so far: "<<largest<<endl;
	cout<<"The largest-2 number found so far: "<<largest2;

return 0;
}