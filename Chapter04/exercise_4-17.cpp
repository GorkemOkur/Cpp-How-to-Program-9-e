/*
 * =====================================================================================
 *
 *       Filename:  exercise_4-17.cpp
 *
 *     Description: 4.17 (Find the Largest)
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
	double number=0, largest=0;

	while(counter < 10){
		cout<<"Enter a number: ";
		cin>>number;

		largest = ( number > largest ?number:largest);

		++counter;
	}

	cout<<"The largest number found so far: "<<largest;

return 0;
}