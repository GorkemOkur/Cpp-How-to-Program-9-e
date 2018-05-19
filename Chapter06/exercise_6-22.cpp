/*
 * =====================================================================================
 *
 *       Filename:  exercise_6-22.cpp
 *
 *     Description: 6.22 (Square of Asterisks)
 *								  
 *
 *        Version:  1.0
 *        Created:  19/05/18 01:55:00
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

void squareOfAsterisks(int side){
	for (int i = 0; i < side; ++i)
	{
		for (int i = 0; i < side; ++i)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}

int main(){
	
	int side=0;

	cout<<"Enter side : ";
	cin>>side;

	cout<<endl;

	squareOfAsterisks(side);
	
	cout<<endl;

return 0;
}
